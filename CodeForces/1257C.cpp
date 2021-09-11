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
	
  	if (n==1)
  	{	
  		cin>>n;
  		cout<<-1<<endl;
  		return ;
  	}

  	map<ll,ll> mp;
  	ll ans=-1;
  	ll temp;
  	for (int i=0;i<n;i++)
  	{
  		cin>>temp;
  		if (mp.find(temp)!=mp.end())
  		{
  			if (ans!=-1)
  			{
  				ans=min(ans,i-mp[temp]+1);
  				
  			}
  			else
  			{
  				ans=i-mp[temp]+1;
  			}
  			mp[temp]=i;
  		}
  		else
  		{
  			mp[temp]=i;
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
