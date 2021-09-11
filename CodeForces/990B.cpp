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
  
  ll n, k;
  cin>>n>>k;

  vector<ll> ve(n);
  vector<ll> chk(n,0);

  for(int i=0;i<n;i++)
  {
  	cin>>ve[i];
  }

  sort(ve.begin(),ve.end());
  reverse(ve.begin(),ve.end());


  int i=0;
  int j=i+1;
  while (i<n && j<n && i<=j)
  {	
  	if (i==j )
  	{
  		j++;
  	}
  	if (ve[i]>ve[j] && ve[i]<=ve[j]+k)
  	{
  		chk[j]=-1;
  		j++;
  	}
  	else
  	{
  		i++;
  	}
  }


  ll count=0;
  for (int  i=0;i<n;i++)
  {
  	if (chk[i]!=-1)
  		count++;
  }

  cout<<count<<endl;
  // cout<<"hello";
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
