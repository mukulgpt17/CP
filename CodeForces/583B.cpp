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

// void solve()
// {
  
// 	ll n;
// 	cin>>n;

// 	vector<ll> ve(n);
// 	vector<ll> chk(n,-1);
// 	for (int i=0;i<n;i++)
// 	{
// 		cin>>ve[i];
// 	}

// 	ll ans=0;
// 	ll dir=1;
// 	ll count=0;
// 	while (count!=n)
// 	{	

// 		ll temp=0;
// 		if (dir==1)
// 		{	ans++;
// 			for (int j=0;j<n;j++)
// 			{
// 				if(ve[j]<=temp)
// 				{
// 					chk[j]=0;
// 				}

// 				if(chk[j]==0)
// 				{
// 					temp++;
// 				}

// 			}
// 			count=temp;
// 		}
// 		else
// 		{
// 			ans++;
// 			ll temp=0;
// 			for (int j=ve.size()-1;j>=0;j--)
// 			{
// 				if (ve[j]<=temp)
// 				{
// 					chk[j]=0;
// 				}
// 				if (chk[j]==0)
// 					temp++;
// 			}

// 			count=temp;

// 		}
// 	}

// 	cout<<ans-1<<endl;
  
// }


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t=1;
    // cin>>t;

    // while (t--)
    // {
    // 	solve();
    // }
return 0;
}
