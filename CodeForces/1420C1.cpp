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
 	int n,q;
 	cin>>n>>q;

 	ll dp1[n+1];
 	ll dp2[n+1];

 	dp1[0]=0;
 	dp2[0]=0;

 	vector<int> ve(n);

 	for (int i=0;i<n;i++)
 	{
 		cin>>ve[i];
 	} 
 	if(n==1)
 	{
 		cout<<ve[0]<<endl;
 		return ;
	 	}
 	if (n<=2)
 	{
 		cout<<max(ve[0],ve[1])<<endl;
 		return ;
 	}
 	else
 	{
 		for (int i=0;i<n;i++)
 		{
 			dp1[i+1]=max(dp1[i],dp2[i]+ve[i]);
 			dp2[i+1]=max(dp2[i],dp1[i]-ve[i]);
 		}

 		cout<<max(dp1[n],dp2[n])<<endl;

 	}
  
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
