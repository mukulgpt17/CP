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
	ll n,d;
	cin>>n>>d;

	map<ll,ll> mp;
	ll t;
	for(int i=0;i<n;i++)
	{

		cin>>t;
		mp[t]++;
	}

	pair<ll,ll> mi=*min_element(mp.begin(),mp.end());
	ll mini=mi.first;
ll count1=0;
	for (auto i=mp.rbegin();i!=mp.rend();i++)
	{	//cout<<i->first;
		if (i->first>mini+d)
		{
			count1+=i->second;
		}
	}

	pair<ll,ll> mx=*max_element(mp.begin(),mp.end());
	ll maxi=mx.first;
	ll count2=0;
	for (auto i=mp.begin();i!=mp.end();i++)
	{
		// cout<<i->first<<" ";
		if (i->first<maxi-d)
		{
			count2+=i->second;
		}
	}
	
	cout<<min(count1,count2)<<endl;
  
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
