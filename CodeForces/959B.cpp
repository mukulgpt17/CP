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
  int n,k,m;
  cin>>n>>k>>m;

  vector<string> ve(n);
  vector<int> cos(n);
  for (int i=0;i<n;i++)
  {
  	cin>>ve[i];
  }

  for (int i=0;i<n;i++)
  {
  	cin>>cos[i];
  }

  // map<string,int> mp;

  // for (int i=0;i<n;i++)
  // {
  // 	mp[ve[i]]=cos[i];
  // }

  for (int i=0;i<k;i++)
  {
  	int nn;
  	cin>>nn;

  	vector<int> te(nn);
  	int mn=INT_MAX;
  	for (int i=0;i<nn;i++)
  	{
  		cin>>te[i];
  		te[i]--;
  		mn=min(mn,cos[te[i]]);
  	}

  	for (int i=0;i<nn;i++)
  	{
  		cos[te[i]]=mn;
  	}
  }
  map<string,int> mp;

  for (int i=0;i<n;i++)
  {
  	mp[ve[i]]=cos[i];
  }

  ll an=0;
  string s;
  for (int i=0;i<m;i++)
  {
  	cin>>s;
  	an+=mp[s];
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
