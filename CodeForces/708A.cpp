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

	ll ind=0;
	for(int i=0;i<s.size();i++)
	{
		if (s[i]=='a')
		{
			ind++;
		}
		else
		{
			break;
		}
	}

	for(int i=ind;i<s.size();i++)
	{

		if(s[i]!='a')
		{
			s[i]=s[i]-1;
		}
		else
		{
			break;
		}
	}
	if (ind==s.size())
	{
		s[s.size()-1]='z';
	}

	cout<<s<<endl;
  
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
