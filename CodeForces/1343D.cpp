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
	ll n,k;

	cin>>n>>k;

	vector<ll> ve(n);
	ll cnt[2*k+1];
	ll pref[2*k+1];
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}  


	memset(pref,0,sizeof(pref));
	memset(cnt,0,sizeof(cnt));

	for(int i=0;i<n/2;i++)
	{
		cnt[ve[i]+ve[n-1-i]]++;	

		pref[min(ve[i],ve[n-1-i])+1]++;
		pref[max(ve[i],ve[n-i-1])+k+1]--;  // atmost 1 
	}

	// cout<<"check1"<<endl;	
	for (int i=1;i<=2*k;i++)
	{
		pref[i]+=pref[i-1];
	}


	ll mini=INT_MAX;

	for (int i=2;i<=2*k;i++)
	{
		mini=min(mini,pref[i]-cnt[i] + (n/2-pref[i])*2);
	}

	cout<<mini<<endl;
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
