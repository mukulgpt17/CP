#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;

vector<ll> adj[10009];
ll par[10009];
bool visited[10009];
ll col[10009];
ll mini;

void dfs(ll curr,ll par)
{
	visited[curr]=true;
	if (par==-1)
	{
		mini++;
	}
	else
	{
		if (col[curr]!=col[par])
		mini++;
	}
	
	for (auto i:adj[curr])
	{
		if(visited[i]==false)
		{
			dfs(i,curr);
		}
	}
}

void solve()
{
	ll n;
	cin>>n;
	mini=0;
	for (int i=0;i<=n;i++)
	{
		adj[i].clear();
	}
	par[1]=-1;
	
	memset(visited,false,sizeof(visited));
	ll tmp;
	for (int i=2;i<=n;i++)
	{
		cin>>tmp;
		par[i]=tmp;
		adj[tmp].pb(i);
	}
	
	
	for (int i=1;i<=n;i++)
	{
		cin>>tmp;
		col[i]=tmp;
	}

	dfs(1,-1);

	cout<<mini<<endl;
	
}


int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

