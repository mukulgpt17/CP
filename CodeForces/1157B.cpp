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
  
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> ve(n);
	for (int i=0;i<n;i++)
		ve[i]=s[i]-'0';
	map<int,int> mp;
	int t;
	for (int i=1;i<=9;i++)
	{
		cin>>t;
		mp[i]=t;
	}
	int i;
	int id=n;
	for (i=0;i<n;i++)
	{
		if(mp[ve[i]]>ve[i])
		{	
			id=i;
			break;
		}
	}

	for (int i=id;i<n;i++)
	{
		if (mp[ve[i]]>=ve[i])
		{
			ve[i]=mp[ve[i]];
		}
		else
			break;
	}

	for (auto i:ve)
		cout<<i;
	cout<<endl;
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
