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
  
  ll n,m,h;
  cin>>n>>m>>h;

  int arr[n][m];

  vector<ll> fr(m);
  for(int i=0;i<m;i++)
  {
  	 cin>>fr[i];
  }

  vector<ll> lf(n);

  for (int i=0;i<n;i++)
  {
  	cin>>lf[i];
  }


  for (int i=0;i<m;i++)
  {
  	for (int j=0;j<n;j++)
  	{
  		arr[j][i]=fr[i];
  	}
  }


  for (int i=0;i<n;i++)
  {
  	for (int j=0;j<m;j++)
  	{
  		if (lf[i]<fr[j])
  			arr[i][j]=lf[i];
  	}
  }
  ll t;
  for (int i=0;i<n;i++)
  {
  	for (int j=0;j<m;j++)
  	{
  		cin>>t;
  		arr[i][j]*=t;
  		cout<<arr[i][j]<<" ";
  	}
  	cout<<endl;
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
