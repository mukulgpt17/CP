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

bool cmp(pair<ll,ll> a,pair<ll,ll> b)
{

	return (min(2*(a.first),a.second)-min(a.first,a.second)>min(2*(b.first),b.second)-min(b.first,b.second));
}


void solve()
{
  	
	ll n,b;
	cin>>n>>b;

	vector<pair<ll,ll> > ve;
	int a,bb;
	for (ll i=0;i<n;i++)
	{
		// cin>>ve[i].first>>ve[i].second;		
		cin>>a>>bb;
		if (a!=0 && bb!=0)
			ve.pb({a,bb});
	}

	sort(ve.begin(),ve.end(),cmp);

	
	ll an=0;
  	for (ll i=0;i<min(b,ve.size());i++)
  	{
  		an+=min(2*(ve[i].first),ve[i].second);
  	}
  	for (int i=b;i<ve.size();i++)
  	{
  		an+=min(ve[i].first,ve[i].second);
  	}

  	cout<<an<<endl;

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
