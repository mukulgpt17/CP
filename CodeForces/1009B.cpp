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
	  
	string s;
	cin>>s;

	vector<int> ve;

	int ct1=0;
	int cto=0;

	for(int i=s.size()-1;i>=0;i--)
	{
		if (s[i]=='1')
			ct1++;
		else if (s[i]=='0')
			cto++;
		else
		{
			ve.push_back(cto);
			cto=0;
		}
	}

	reverse(ve.begin(),ve.end());

	string ans="";

	for(int i=0;i<cto;i++)
		ans+='0';

	for (int i=0;i<ct1;i++)
		ans+='1';

	for (auto i:ve)
	{
		ans+='2';
		for(int j=0;j<i;j++)
			ans+='0';
	}

	cout<<ans<<endl;
  
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
