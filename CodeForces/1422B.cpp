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
	 ll n,m;
	 cin>>n>>m;

	int arr[n][m];

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}

	ll sum=0;

	int nn=n%2?n/2:(n/2)-1;
	int mm=m%2?m/2:(m/2)-1;
	// cout<<nn<<" "<<mm<<endl;
	for (int i=0;i<=nn;i++)
	{
		for (int j=0;j<=mm;j++)
		{
			
			vector<ll> ar;

			ar.push_back(arr[i][j]);

			if (j!=(m-1-j))
			{
				ar.push_back(arr[i][m-1-j]);
			}

			if (i!=(n-1-i))
			{
				ar.push_back(arr[n-i-1][j]);
				if (j!=(m-1-j))
					ar.push_back(arr[n-i-1][m-1-j]);
			}
			

			sort(ar.begin(),ar.end());

			int tt=ar.size();

			for (auto i:ar)
			{
				sum+=abs(i-ar[tt/2]);
			}


		}
	}

	cout<<sum<<endl;





  
}

main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
