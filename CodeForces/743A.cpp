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
  
ll n,a,b;
cin>>n>>a>>b;
string s;
cin>>s;

if(s[a-1]==s[b-1])
{
	cout<<0<<endl;
}
else
{	ll mini=INT_MAX;

	// for(int i=a-1;i>=0;i--)
	// {
	// 	if (s[i]==s[b-1])
	// 	{
	// 		mini=min(abs(a-(i+1)),mini);
	// 		break;
	// 	}

	// }

	// for(int i=a-1;i<s.size();i++)
	// {
	// 	if (s[i]==s[b-1])
	// 	{
	// 		mini=min(abs(a-(i+1)),mini);
	// 		break;
	// 	}

	// }

	cout<<1<<endl;
}


  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdou	t);
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
