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

ll dp[101][101];

void solve()
{

	ll n,b;
	cin>>n>>b;
		

	vector<ll> ve(n);
	vector<ll> od(n);
	vector<ll> ev(n);

	for(ll i=0;i<n;i++)
	{
		cin>>ve[i];
		if (ve[i]%2)
		{
			if (i==0)
			{
				od[i]=1;
				ev[i]=0;
			}
			else
			{
				od[i]=od[i-1]+1;
				ev[i]=ev[i-1];
			}
		}
		else
		{
			if (i==0)
			{
				ev[i]=1;
				od[i]=0;
			}
			else
			{
				ev[i]=ev[i-1]+1;
				od[i]=od[i-1];
			}
		}
	}


	for (int i=0;i<=n;i++)
	{
		dp[0][i]=0;
	}

	for (int i=0;i<=b;i++)
	{
		dp[i][0]=0;
		dp[i][1]=0;
	}

	for (int i=2;i<n;i++)
	{	
		for (int j=1;j<=b;j++)
		{

			if (i%2==0)
			{
				if (od[i-1]==ev[i-1] && abs(ve[i]-ve[i-1])<=j)
				{
					
					dp[j][i+1]=max(dp[j][i],dp[j-abs(ve[i]-ve[i-1])][i-1]+1);
				}
				else
				{
					dp[j][i+1]=dp[j][i];
				}
			}
			else
			{	
				dp[j][i+1]=dp[j][i];
			}
		}
	}

	cout<<dp[b][n]<<endl;
	return ;  
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
