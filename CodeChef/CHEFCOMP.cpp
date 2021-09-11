#include<bits/stdc++.h>
using namespace std;


unordered_set<int> adj[1000001];
int visited[1000001];
int fruit[1000001];
int Days[1000001];
int pop[1000001];

void dfs(int node,int day,int start)
{
//	cout<<"Day "<<day<<endl;
	visited[node]=1;
	fruit[node]=fruit[node]-min(pop[start],fruit[node]);
//	cout<<node<<"->"<<fruit[node]<<" !!";
	if (fruit[node]==0)
	{
		if (Days[node]==0)
		{//	cout<<"i came here"<<endl;
			Days[node]=day;
//			cout<<"Days value "<<Days[node];
		}
		else
		{
			Days[node]=min(Days[node],day);
		}
	}
	
	for (auto itr=adj[node].begin();itr!=adj[node].end();itr++)
	{
	
		if (visited[*itr]==0)
		{
				dfs(*itr,day,start);
		}	
			
	}	
	
}




int main()
{
	
	int t;
	cin>>t;
	
	for (int i=0;i<t;i++)
	{
		
		int n;
		cin>>n;
		int a,b;
		for (int m=1;m<=n-1;m++)
		{
			cin>>a>>b;
			
			adj[a].insert(b);
			adj[b].insert(a);
		}
		
		int perm[n+1];
		int temp;
		for (int m=1;m<=n;m++)
		{
			cin>>temp;
			perm[m]=temp;
		}
		
		for (int m=1;m<=n;m++)
		{
			
			cin>>temp;
			pop[m]=temp;
		}
		for (int m=1;m<=n;m++)
		{
			cin>>temp;
			fruit[m]=temp;
		}
		
		for (int m=1;m<=n;m++)
		{
			for (int k=1;k<=n;k++)
				visited[k]=0;
			
			dfs(perm[m],m,perm[m]);
			
			for (auto itr=adj[perm[m]].begin();itr!=adj[perm[m]].end();itr++)
			{
				adj[*itr].erase(perm[m]);
			}
			adj[perm[m]].clear();
			
		}
		
		for (int m=1;m<=n;m++)
		{
			if (fruit[m]==0)
			cout<<Days[m]<<" ";
			else
			cout<<-1<<" ";
		}
		cout<<endl;
		
		
		
		for (int m=1;m<=n;m++)
		{
			adj[m].clear();
			visited[m]=0;
			fruit[m]=0;
			Days[m]=0;
			pop[m]=0;
		}
		
		
		
	}
	
	
	return 0;	
}





