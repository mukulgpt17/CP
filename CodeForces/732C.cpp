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
typedef unsigned long long int ull;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

void solve()
{
  
  ll b,d,s;
  cin>>b>>d>>s;
  
  vector<ll> vec;
  vec.pb(0);
  vec.pb(b);
  vec.pb(s);
  vec.pb(d);

  ull ans=-1;
  for (int i=0;i<3;i++)
  {
  	for (int j=0;j<3;j++)
  	{
  		vector<ll> te=vec;
  		// for (int k=1;k<=3;k++)
  		// {
  		// 	cout<<te[k]<<" ";
  		// }1 0 0

  		// cout<<endl;
  		for (int k=i+1;k<=3;k++)
  		{
  			te[k]--;
  		}
  		for (int k=j;k>=1;k--)
  		{
  			te[k]--;
  		}
  		// for (int k=1;k<=3;k++)
  		// {
  		// 	cout<<te[k]<<" ";
  		// }
  		// cout<<endl;
  		
  			ll mx=*max_element(te.begin()+1,te.end());
  			ll temp=0;
  			for (int k=1;k<=3;k++)
  			{
  				temp+=mx-te[k];
  			}
  			if(ans==-1)
  			ans=temp;
  			else
  			ans=min(temp,ans);
  		
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


    int t=1;
    // cin>>t;
    while (t--)
    {
    	solve();
    }
return 0;
}
