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
	
	ll n,k;
	cin>>n>>k;

	int arr[n];
	memset(arr,0,sizeof(arr));

	for (int i=0;i<k;i++)
	{
		int a,b,c;
		cin>>a;
		if (a==1)
		{
			cin>>b>>c;
			arr[b]=1;
			arr[c]=1;
		}
		else
		{
			cin>>b;
			arr[b]=1;
		}

	}  
	int su=0;
	for (int i=1;i<=n-1;i++)
		su+=arr[i];
	int mx=n-1-su;

	// cout<<endl;

	int cc=0;

	int i=n-1;

	while (i>1)
	{
		if (arr[i]==0 && arr[i-1]==0)
		{
			cc++;
			i--;
		}
		i--;
	}

	int mn=mx-cc;

	cout<<mn<<" "<<mx<<endl;

  
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
