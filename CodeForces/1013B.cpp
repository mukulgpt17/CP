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
  
  ll n,x;
  cin>>n>>x;

  vector<ll> ve(n);
  set<ll> s;
  set<ll> s1;
  set<ll> s2;
  int flag=0;
  for(ll i=0;i<n;i++)
  	{
  		cin>>ve[i];
  		if (s2.find(ve[i])!=s2.end())
  		{
  			flag=1;
  		}

  		else
  		{
  			s2.insert(ve[i]);
  		}
  	}
  	
  	if (flag==1)
  	{
  		cout<<0<<endl;
  		return;
  	}
  	else
  	{
  		s.insert(ve[0]);
  		s1.insert(ve[0]&x);
  		int ans=INT_MAX;
  		for (ll i=1;i<n;i++)
  		{

  			if (s1.find(ve[i])!=s1.end() || s.find(ve[i]&x)!=s.end())
  			{
  				ans=min(ans,1);
  			}
  			else if (s1.find(ve[i]&x)!=s1.end())
  			{
  				ans=min(ans,2);
  			}
  		
  			
  				s.insert(ve[i]);
  				s1.insert(ve[i]&x);
  			
  		}
  		if (ans==INT_MAX)
  		cout<<-1<<endl;
  		else
  		cout<<ans<<endl;

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
