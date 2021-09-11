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

void solve()
{
  
  ll n;
  cin>>n;

  map<ll,vector<ll>> mp;
  ll p;
  for(int i=0;i<2*n;i++)
		{
			cin>>p;
			mp[p].push_back(i);
	}

  ll cost=0;

  for(int i=2;i<=n;i++)
  {
  	if(abs(mp[i][0]-mp[i-1][0])+abs(mp[i][1]-mp[i-1][1])<abs(mp[i][0]-mp[i-1][1])+abs(mp[i][1]-mp[i-1][0]))
  	{
  		cost+=abs(mp[i][0]-mp[i-1][0]);
  		cost+=abs(mp[i][1]-mp[i-1][1]);
  	}
  	else
  	{
  		cost+=abs(mp[i][0]-mp[i-1][1]);
  		cost+=abs(mp[i][1]-mp[i-1][0]);
  		
  	}
  }


  cost+=mp[1][0]-0;
  cost+=mp[1][1]-0;

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
