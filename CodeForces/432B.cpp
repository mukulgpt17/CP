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

// cout<<n<<endl;

vector<pair<ll,ll>> vec(n);
map<ll,ll> mph;
map<ll,ll> mpa;
ll a,b;
for (int i=0;i<n;i++)
{
	cin>>a>>b;
	vec[i]={a,b};

	mph[a]++;
	mpa[b]++;
}

// for (int i=0;i<n;i++)
// {
// 	cout<<vec[i].first<<" "<<vec[i].second<<endl;
// }


vector<pair<ll,ll>> ans(n);

for (int i=0;i<n;i++)
{

ans[i]={n-1,n-1};
ll t=mph[vec[i].second];
ans[i].second-=t;
ans[i].first+=t;

}

for (int i=0;i<n;i++)
{

	cout<<ans[i].first<<" "<<ans[i].second<<endl;
}

  
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
