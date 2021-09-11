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

  vector<int> ve(n);

  vector<int> ve1(n);
  int su=0;

  for (int i=0;i<n;i++)
  {
  	cin>>ve[i];
  	su+=ve[i];
  }

  for (int i=0;i<n;i++)
  {
  	cin>>ve1[i];
  }


  if (su>=0)
  {

  	vector<int> te;
  	for (int i=0;i<n;i++)
  	{
  		if (ve1[i]==0)
  		{
  			te.pb(ve[i]);
  		}
  	}

  	sort(te.begin(),te.end(),greater<int>());
  	int id=0;
  	for (int i=0;i<n;i++)
  	{
  		if (ve1[i]==0)
  		{
  			cout<<te[id]<<" ";
  			id++;
  		}
  		else
  		{
  			cout<<ve[i]<<" ";
  		}
  	}
  	cout<<endl;
  	return ;
  }
  else
  {
  	for(auto i:ve)
  		cout<<i<<" ";
  	cout<<endl;
  	return ;
  }

  
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
