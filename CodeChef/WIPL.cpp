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
ll dp[4001][4001];
void solve()
{
  
 ll n,k;
  cin>>n>>k;
  vector<ll> ve(n);
  vector<ll> suff(n);

  for (int i=0;i<n;i++)
  {
  	cin>>ve[i];
  }

  sort(ve.begin(),ve.end(),greater<int>());
  // for (auto i:ve)
  // {
  // 	cout<<i<<" ";
  // }
  // cout<<endl;
  for (int i=0;i<n;i++)
  {
  	if (i==0)
  	{
  		suff[i]=ve[i];
  	}
  	else
  	{
  		suff[i]=suff[i-1]+ve[i];
  	}
  }
  memset(dp,-1,sizeof(dp));

  for (int i=1;i<=n;i++)
  {
  	for (int j=1;j<=k;j++)
  	{

  		if(ve[i-1]>=j)
  		{
  			dp[i][j]=ve[i-1];
  		}
  		else
  		{
  			if (dp[i-1][j-ve[i-1]]!=-1)
  			{
  				dp[i][j]=dp[i-1][j-ve[i-1]]+ve[i-1];
  				if (dp[i-1][j]!=-1 && dp[i-1][j-ve[i-1]]+ve[i-1]>dp[i-1][j])
  				{
  					dp[i][j]=dp[i-1][j];
  				}
  				
  			}
  			
  		}
  	}
  }

  ll index=-1;
  for (int i=0;i<n;i++)
  {
  	if (dp[i][k]!=-1 && suff[i]-dp[i][k]>=k)
  	{
  		index=i+1;
  		break;
  	}

  }


  cout<<index<<endl;
  
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
