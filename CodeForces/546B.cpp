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
int arr[6001];
void solve()
{
  
	ll n;
	cin>>n;
	memset(arr,0,sizeof(arr));
	vector<int> ve(n);
	int cs1=0;
	int cs2=0;
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
		// arr[ve[i]]=1;
	}

	arr[ve[0]]=1;

	for (int i=1;i<n;i++)
	{
		if (arr[ve[i]]==1)
		{
			for (int j=ve[i];j<=6000;j++)
			{
				if (arr[j]==0)
				{
					cs1+=j-ve[i];
					arr[j]=1;
					break;
				}
			}
		}
		else
		{
			arr[ve[i]]=1;
		}

	}
	cout<<cs1<<endl;

	// cout<<min(cs1,cs2)<<endl;


  
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
