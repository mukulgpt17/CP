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
  
	ll n;
	// cin>>n;

	string s;
	cin>>s;
	n=s.size();
	char arr[n];
	arr[0]=s[0];

	vector<string> ve;
	ve.push_back("Mike");

	for (int i=1;i<n;i++)
	{
		if (s[i]>arr[i-1])
		{
			ve.push_back("Ann");
			arr[i]=arr[i-1];
		}
		else
		{
			arr[i]=s[i];
			ve.push_back("Mike");
		}
	}

	for (auto i:ve)
	{
		cout<<i<<endl;
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
