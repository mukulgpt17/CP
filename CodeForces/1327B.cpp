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
  ll n;
  cin>>n;
  vector<vector<ll>> vec;
  vector<ll> mr(n+1,-1);
  vector<ll> pr(n+1,-1);
  for (int i=0;i<n;i++)
  {
  	ll k;
  	cin>>k;

  	vector<ll> te;
  	ll  t;
  	// cin>>t;
  	for (int j=0;j<k;j++)
  	{
  		cin>>t;
  		te.pb(t);	
  	}

  	vec.pb(te);
  }
  ll count=0;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<vec[i].size();j++)
  	{
  		if (pr[vec[i][j]]==-1)
  		{
  			pr[vec[i][j]]=0;
  			mr[i+1]=0;
  			count++;
  			break;
  		}
  	}
  }
  if(count==n)
  {
  	cout<<"OPTIMAL"<<endl;
  	return;
  }
  ll flag=0;
  ll prr;

  for (int i=1;i<=n;i++)
  {
  	if (pr[i]==-1)
  	{
  		prr=i;
  		break;
  	}
  }
  for (int i=1;i<=n;i++)
  {
  	if (mr[i]==-1)
  	{
  		cout<<"IMPROVE"<<endl;
  		cout<<i<<" "<<prr<<endl;
  		return;
  	}
  }

  return ;	


  
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
