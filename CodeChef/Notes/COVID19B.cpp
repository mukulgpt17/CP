#include<bits/stdc++.h>
using namespace std;


vector<int> arr[5];
bool visited[5];
float ti[5];
int nodes[5];

int dfs(int node,bool visted[],float ti[])
{

	visited[node]=true;
	int count=1;
	for (int child:arr[node])
	{
		if (visited[child]!=true)
		{	
			if (child<node)
			{	
				float t=(float)(node-child)/(nodes[child]-nodes[node]);
			//	cout<<t<<endl;
				if (t>=0 && t>ti[node])
				{	ti[child]=t;
					count+=dfs(child,visited,ti);	
				}
			}
			else if (child>node)
			{	
				float t=(float)(child-node)/(nodes[node]-nodes[child]);
				if (t>=0 && t>ti[node])
				{
					ti[child]=t;
					count+=dfs(child,visted,ti);
				}
			}
		}
	}
	return count;
}

int main()
{
		
		int t;
		cin>>t;
		
		while (t--)
		{
			
		for (int i=0;i<5;i++)
		{
			arr[i].clear();
		}
		
		
		int n ;
		cin>>n;
		for (int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			nodes[i]=temp;

		}
		// graph 
		for (int i=0;i<n;i++)
		{
			for (int j=i+1;j<n;j++)	
			{
				if (nodes[i]>nodes[j])
				{
					arr[i].push_back(j);
					arr[j].push_back(i);
				}
			}
		}	
		int total[n]={0};
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
			visited[j]=false;
			ti[j]=-1;
			}
			ti[i]=0;
			total[i]=dfs(i,visited,ti);
		}
		
		
		int mini=INT_MAX;
		int maxi=INT_MIN;
		for (int child:total)
		{
			mini=min(mini,child);
			maxi=max(maxi,child);
		}
		cout<<mini<<" "<<maxi<<endl;
		
	}
		return 0;
	}
