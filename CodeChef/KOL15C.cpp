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
// #define mp make_pair

int arr[100001];

void solve1(map<int,vector<int>> &mp,int n)
{
	for (auto i:mp)
	{
		int count[n+1];
		int inc[n+1];

		memset(count,0,sizeof(count));

		for (auto j:i.second)
		{
			count[j]++;
		}

		for (int j=1;j<=i.first;j++)
		{
			inc[j]=count[j];
		}

		for (int j=i.first+1;j<=n;j++)
		{
			inc[j]=count[j]+inc[j-i.first];
		}
		for (int i=1;i<=n;i++)
		arr[i]+=inc[i];
	}

	
}

void solve2(int a,int b,int n)
{

	for (int i=b;i<=n;i+=a)
	{
		arr[i]++;
	}

}



void solve()
{
  
	int n,updates;
	cin>>n>>updates;

	memset(arr,0,sizeof(arr));

	int st=sqrt(n);
	int a,b;
	map<int,vector<int>> mp;
	for (int i=0;i<updates;i++)
	{
		cin>>a>>b;

		if (a<st)
		{
			// solve1(a,b);  // time comp : O(N*sqrt(N))
			mp[a].pb(b);
		
		}
		else
		{
			solve2(a,b,n); // time comp : O(U*sqrt(N));
		}
	}

	// total : O((N+U)*sqrt(N))

	if (mp.size()>0)
	{
		solve1(mp,n);
	}

	for (int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	  
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

