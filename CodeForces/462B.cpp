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


bool cmp(int a,int b)
{

	return a>b;
}

void solve()
{
  
	ll n,m;
	cin>>n>>m;

	string s;
	cin>>s;

	int arr[26];

	memset(arr,0,sizeof(arr));

	for (int i=0;i<s.size();i++)
	{

		arr[s[i]-'A']++;
	}

	sort(arr,arr+26,cmp);

	// for (int i=0;i<26;i++)
	// 	cout<<arr[i]<<" ";

	// cout<<endl;

	

	ll count=0;

	for (auto i:arr)
	{
		// cout<<i<<endl;
		if (i<=m)
		{
			// cout<<i<<endl;
			count+=1ll*i*i;
			m-=i;
		}
		else
		{
			count+=m*m;
			m=0;
			break;
		}
	}
	cout<<count<<endl;
  
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
