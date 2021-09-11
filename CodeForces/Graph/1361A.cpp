#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
vector<int> adj[500002];
int topic[500002];
//pair<int,int> pr[500002];
int topic2[500002]; 

void fun()
{
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>> pr;
	for (int i=1;i<=n;i++)
	{
		adj[i].clear();
	}
	
	int a,b;
	
	for (int i=1;i<=m;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	for (int i=1;i<=n;i++)
	{
		cin>>a;
		pr.push_back({a,i});
	}
	
	sort(pr.begin(),pr.end());
	
	memset(topic,-1,sizeof(topic));
	
	vector<int> answer;
	for (auto i=pr.begin();i!=pr.end();i++)
	{	
		int tp=i->first;
		int bl=i->second;
		int flag=0;
	//	memset(topic2,-1,sizeof(topic2));
		int mini=tp;
		for(auto k=adj[bl].begin();k!=adj[bl].end();k++)
		{	if (topic[*k]==tp)
			{
				flag=1;
				break;
			}
			if (topic[*k]==-1)
			{
				mini=min(mini,*k)
			}
			
		}
		if (flag==1)
		{
			cout<<-1<<endl;
			return ;
		}
		else
		{	int flag2=0;
			for (int i=1;i<tp;i++)
			{
				if (topic2[i]==-1)
				{
					flag2=1;
					break;
				}
			}
			if (flag2==0)
			{
			
			topic[bl]=tp;
			answer.push_back(bl);}
			else
			{
				cout<<-1<<endl;
				return ;
				
			}
		}
	}
	
	for (int i=0;i<n;i++)
	{
		cout<<answer[i]<<" ";
	}
	cout<<endl;
}

int main()
{
 fun();
 return 0;
}

