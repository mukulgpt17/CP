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

bool check(ll mid,vector<ll> &ve,ll cc)
{

	ll count=1;
	ll prev=ve[0];

	for (int i=1;i<ve.size();i++)
	{
		if(ve[i]>=prev+mid)
		{
			count++;
			prev=ve[i];
		}
	}

	if (count>=cc)return true;
	else return false;

}



void solve()
{
  
  ll n,c;

  cin>>n>>c;

  vector<ll> ve(n);
  ll mini=INT_MAX;
  ll maxi=INT_MIN;
  for (int i=0;i<n;i++)
  {
  	
  	cin>>ve[i];
  	mini=min(mini,ve[i]);
  	maxi=max(maxi,ve[i]);

  }

  sort(ve.begin(),ve.end());

  ll st=mini;
  ll ed=maxi+1;
  ll ans=0;

  while (st<=ed)
  {
  	
  	ll mid=(st+ed)/2;

  	if(check(mid,ve,c))
  	{
  		ans=mid;
  		st=mid+1;

  	}
  	else
  	{
  		ed=mid-1;
  	}

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


    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
