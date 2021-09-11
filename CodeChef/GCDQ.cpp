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
  
	ll n,q;
	cin>>n>>q;


	vector<ll> ve(n);
	for (int i=0;i<n;i++)
		cin>>ve[i];

	vector<ll> lg(n);
	vector<ll> rg(n);

	lg[0]=ve[0];
	for (int i=1;i<n;i++)
	{
		lg[i]=__gcd(lg[i-1],ve[i]);
	}

	rg[n-1]=ve[n-1];

	for (int i=n-2;i>=0;i--)
	{
		rg[i]=__gcd(rg[i+1],ve[i]);
	}

	for (int i=0;i<q;i++)
	{
		ll l,r;
		cin>>l>>r;

		l--;
		r--;
		if (l>0 && r<n-1)
		{ll temp=__gcd(lg[l-1],rg[r+1]);
						cout<<temp<<endl;
				}
		else if (l==0 && r<n-1)
		{
			ll temp=rg[r+1];
			cout<<temp<<endl;
		}
		else if (l>0 && r==n-1)
		{
			ll temp=lg[l-1];
			cout<<temp<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
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
