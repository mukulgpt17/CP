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
  
  int a,b;
  cin>>a>>b;

  int n;
  cin>>n;

  vector<pair<int,int>> ve(n);
  int l,w;
  for (int i=0;i<n;i++)
  {
  	cin>>l>>w;
  	ve[i]={l,w};
  }

  ll an=0;

  for (int i=0;i<n;i++)
  {
  	int x1=(ve[i].first/a)*(ve[i].second/b);
  	int x2=(ve[i].second/a)*(ve[i].first/b);

  	an+=max(x1,x2);
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


    int t=1;
    // cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
