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

vector<ll> allSum(vector<ll> su)
{

	ll mx=1<<su.size();
	vector<ll> vec;

	for (ll i=0;i<mx;i++)
	{
		ll te=i;

		ll curr=0;

		for (ll b=0;b<su.size();b++)
		{

			if (te&(1<<b))curr+=su[b];
		}

		vec.push_back(curr);
	}

	return vec;
}


void solve()
{
  
	ll n,a,b;
	cin>>n>>a>>b;

	// cout<<n<<a<<b<<endl;
	vector<ll> vea(n/2);
	vector<ll> veb((n+1)/2);


	for (int i=0;i<n/2;i++)
	{
		cin>>vea[i];
	}
	for (int i=0;i<(n+1)/2;i++)
	{
		cin>>veb[i];
	}

	// for (auto i:vea)cout<<i<<" ";
	// for (auto i:veb)cout<<i<<" ";

	vector<ll> A=allSum(vea);
	vector<ll> B=allSum(veb);

	sort(B.begin(),B.end());

	ll count=0;

	for (int i=0;i<A.size();i++)
	{

		auto lr=lower_bound(B.begin(),B.end(),a-A[i]);
		auto ub=upper_bound(B.begin(),B.end(),b-A[i]);


		count+=ub-lr;

	}

	cout<<count<<endl;
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
