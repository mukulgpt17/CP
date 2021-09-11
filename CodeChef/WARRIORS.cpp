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
  ll t;
  cin>>t;
  ll n,q;
  cin>>n>>q;

  vector<ll> ve(n);
  FOR(i,n)
  {
  	cin>>ve[i];
  }

  sort(ve.begin(),ve.end());

  map<ll,pair<ll,ll>> mp;

  vector<ll> qq(q);
  vector<ll> cq(q);

  FOR(i,q)
  {
  	cin>>qq[i];
  	cq[i]=qq[i];
  }

  sort(cq.begin(),cq.end());

  ll maxi=-1;

  for (int i=0;i<q;i++)
  {
  	if (i==0)
  	{
  		ll val=cq[i];
  		ll curr=cq[i];
  		
  		for (int i=0;i<n;i++)
  		{
  			
  		}



  	}
  	else
  	{



  	}
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
