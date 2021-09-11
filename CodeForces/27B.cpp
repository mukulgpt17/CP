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
 vector<int> adj[51];

bool dfs(int a,int b)
{

	int val=false;

	for (auto i:adj[a])
	{
		if(i==b)
			return true;
		else {

			if (dfs(i,b)==true)
				return true;
		}
	}

	return false;

}

void solve()
{
  
  int n;
  cin>>n;
  int arr[n+1];
  memset(arr,0,sizeof(arr));

 
  int a,b;

  for (int i=0;i<=n;i++)
  {
  	adj[i].clear();
  }


  int tot=(n*(n-1))/2 ;
  for (int i=0;i<tot-1;i++)
  {
  		cin>>a>>b;
  		// cout<<a<<b<<endl;
  		adj[a].pb(b);

  		arr[a]++;
  		arr[b]++;
  }

  a=-1;
  b=-1;


  for(int i=1;i<=n;i++)
  {
  	if(arr[i]==n-2)
  	{
  		if (a==-1)
  		{
  			a=i;
  		}
  		else
  		{
  			b=i;
  			break;
  		}
  	}
  }

  // cout<<a<<" "<<b<<endl;
  // a=4;
  // b=3;

  if (dfs(a,b)==true)
  {
  	cout<<a<<" "<<b<<endl;
  }
  else
  {
  	cout<<b<<" "<<a<<endl;
  }
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
