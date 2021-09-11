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
  
  ll y,k,n;
  cin>>y>>k>>n;


  ll div=y/k;
  div++;
  vector<ll> vec;
  ll x;
  while (true)
  {
  	x=k*div-y;
  	if (x>=1 && x+y<=n)
  	{
  		vec.pb(x);
  		div++;
  	}
  	else
  	{
  		break;
  	}
  }

  if (vec.size()==0)
  {
  	cout<<-1<<endl;
  }
  else
  {
  	for (auto i:vec)
  	{
  		cout<<i<<" ";
  	}
  	cout<<endl;
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
