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

  vector<ll> ve(n);
  ll sum=0;
for (int i=0;i<n;i++)
{
	cin>>ve[i];
	sum+=ve[i];
}

// cout<<sum<<endl;

ll av=ceil((double)sum/n);
// cout<<av<<endl;
ll ab1=av;
av*=n;
// cout<<av<<endl;
ll cost=av-sum;
// cout<<cost<<endl;
for (auto i: ve)
{	
	if (i>ab1)
	cost+=(i-ab1);
}

cout<<cost<<endl;

}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
