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

map<char,int> mp;
void solve()
{
	string s;
	cin>>s;

	int count=0;
	for (int i=0;i<s.size();i++)
	{
		if (mp.find(s[i])!=mp.end())
		{
			count+=mp[s[i]];
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


	mp['A']=1;
	mp['D']=1;
	mp['O']=1;
	mp['P']=1;
	mp['Q']=1;
	mp['R']=1;
	mp['B']=2;
    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
