#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1000000007  
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef unsigned long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair


// ll mul_mod(ll a, ll b,ll m)
// 	ll	x = 0;
// 	ll  y = a;
// 		while (b > 0)
// 			{if (b & 1)
// 				// # No overflows in additons.
// 				x = (x + y) % m
// 			y = (y + y) % m
// 			b >>= 1
// 		}
// 		return x



ll mul_mod(ll a,ll b, ll m)
{
	ll x=0;
	ll y=a;

	while (b>0)
	{
		if (b&1)
		{
			x=(x+y)%m;
		}
		y=(y+y)%m;
		b=b>>1;
	}

	return x;

}
ll bexpm(ll a,ll b,ll m)
{
	if (m==0)
		return 0;
	a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            // res = res * a % m;
        	res=mul_mod(res,a,m);
        // a = a * a % m;
        a=mul_mod(a,a,m);
        b >>= 1;
    }
    return res;
}


void solve()
{
  
	ll a,b,n;
	cin>>a>>b>>n;

	ll md=a-b;
	if(md!=0)
	{
	ll aa=bexpm(a,n,md);
	ll bb=bexpm(b,n,md);

	ll fin=(aa%md+bb%md)%md;

	ll answer=__gcd(fin,a-b);
	answer%=mod;
	cout<<answer<<endl;
  	}
  	else
  	{
  		ll answer=(bexpm(a,n,mod)+bexpm(b,n,mod))%mod;
  		cout<<answer<<endl;
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
    // cout<<"Hello "<<endl;
    while (t--)
    {
    	solve();
    }
return 0;
}
