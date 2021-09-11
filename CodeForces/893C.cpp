#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

int vec[100001];
vector<int> adj[100001];
int visited[100001];

int dfs(int i)
{
	int temp=vec[i];
	visited[i]=1;
	for (auto k:adj[i])
	{
		if (visited[k]==0)
		{
			// temp=min(temp,dfs(k));	
			int x=dfs(k);
			temp=min(temp,x)
;		}
	}

	return temp;
}


void solve()
{
  
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++)
		adj[i].clear();
	memset(vec,0,sizeof(vec));
	memset(visited,0,sizeof(visited));
	int mi=INT_MAX;
	for (int i=1;i<=n;i++)
	{
		cin>>vec[i];
		mi=min(mi,vec[i]);
	}	
	int a,b;
	for (int i=0;i<m;i++)
	{

		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}


	if (n==(m+1))
	{
		cout<<mi<<endl;
		return;

	}


	ll cost=0;

	for(int i=1;i<=n;i++)
	{
		if (visited[i]==0)
		{
			cost+=dfs(i);
		}
	}

	cout<<cost<<endl;


  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t=1;
    // cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
