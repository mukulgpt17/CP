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

	string s;
	cin>>s;
	ll p=k/2;
	ll q=k/2;
	string an="";

	for (int i=0;i<n;i++)
	{
		if(s[i]=='(' && p>0)
		{
			an+=s[i];
			p--;
		}
		else if (s[i] ==')' && q>0)
		{
			an+=s[i];
			q--;
		}

	}

	cout<<an<<endl;
  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t=0;
    // cin>>t;
    cout<<"Hello World"<<endl;
    while (t--)
    {
    	solve();
    }
return 0;
}
