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
  	
  	ll n,m;
  	cin>>n>>m;

  	// vector<ll> ve(n);
  	map<int,int> mp;
  	vector<ll> pe(m);
  	ll te;
  	for (int i=0;i<n;i++)
  	{
  		cin>>te;
  		mp[te]++;
  	}

  	for (int i=0;i<m;i++)
  	cin>>pe[i];


  	for(int i=0;i<m;i++)
  	{

  		auto t=mp.upper_bound(pe[i]);
  		if (t==mp.begin())cout<<-1<<endl;
  		else
  		{
  			t--;
  			cout<<t->first<<endl;
  			mp[t->first]--;
  			if (mp[t->first]==0)
  			{
  				mp.erase(t->first);
  			}
  		}

  	}


  
}


int main() {
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
