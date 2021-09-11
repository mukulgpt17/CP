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
  
	vector<pair<ll,ll>> ve1;
	vector<pair<ll,ll>> ve2;

	ll n;
	cin>>n;
	ll a,b;
	for (int i=0;i<n;i++)
	{
		cin>>a>>b;
		ve1.pb({a,b});
	}

	for (int i=0;i<n;i++)
	{
		cin>>a>>b;
		ve2.pb({a,b});
	}	

	sort(ve1.begin(),ve1.end());
	sort(ve2.begin(),ve2.end());
	reverse(ve2.begin(),ve2.end());

	cout<<ve1[0].first+ve2[0].first<<" "<<ve1[0].second+ve2[0].second<<endl;
  
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
