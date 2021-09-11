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

	string an;

	for (int i=0;i<n;i++)
	{

		if (an.size()%2==0 || an.back()!=s[i])
			an+=s[i];

	}
	if(an.size()%2)
		an.pop_back();

	cout<<n-an.size()<<endl;
	cout<<an<<endl;

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

    // string s="Mukul";
    // s=s.substr(3);
    // cout<<s<<endl;

    while (t--)
    {
    	solve();
    }
return 0;
}
