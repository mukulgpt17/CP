#include<bits/stdc++.h>
using namespace std;

//unordered_map<int,int> row;
//unordered_map<int,int> col;
int cycles=0;
int vertex=0;
vector<int> adj[100001];
int color[100001];
void dfs(int i)
{	
	color[i]=1;
	for (auto k:adj[i])
	{	
		if (color[k]==1)
		{
			cycles++;
		}
		else if (color[k]==0)
		{
			dfs(k);
		}
	}	
	color[i]=2;
}
void fun()
{
	cycles=0;
	vertex=0;
	int n,m;
	cin>>n>>m;
	int a,b;
	for (int i=0;i<=n;i++)
	{
		adj[i].clear();
	}
	for (int i=0;i<m;i++)
	{
		
		cin>>a>>b;
		if (a==b)
		{
			continue;
		}
		else
		{
		vertex++;
		adj[a].push_back(b);
		}	
	}
	
	memset(color,0,sizeof(color));
	
	for (int i=1;i<=n;i++)
	{
		if (adj[i].size()!=0 && color[i]==0)
		{
			dfs(i);	
		}
	}
	cout<< vertex+cycles<<endl;;
}
int main()
{
 int t;
 cin>>t;
 while (t--)
 {
 	fun();
 }

 return 0;
}
/*
4
3 1
2 3
3 2
2 1
1 2
5 3
2 3
3 1
1 2
5 4
4 5
5 1
2 2
3 3
*/

