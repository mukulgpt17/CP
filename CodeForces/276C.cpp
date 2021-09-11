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
  	ll n,q;
  	cin>>n>>q;
  	vector<ll> ve(n);

  	vector<ll> arr(n+1,0);

  	FOR(i,n)
  	cin>>ve[i];

  	FOR(i,q)
  	{	
  		ll a,b;
  		cin>>a>>b;
  		a--;
  		b--;
  		arr[a]++;
  		arr[b+1]--;
  	}

  	FOR(i,n)
  	{
  		if (i!=0)
  			arr[i]+=arr[i-1];
  	}

  	sort(arr.begin(),arr.end());

  	sort(ve.begin(),ve.end());

  	reverse(arr.begin(),arr.end()w);
  	reverse(ve.begin(),ve.end());
  	
  	ll ans=0;

  	FOR(i,n)
  	{
  		ans+=ve[i]*arr[i];
  	}

  	cout<<ans<<endl;


  
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
