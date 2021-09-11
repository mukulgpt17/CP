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
		
	ll n,x;
	cin>>n>>x;

	vector<ll> ve(n);
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}

	sort(ve.begin(),ve.end());

	ll prev=0;
	ll cnt=0;
	ll ans=0;
	int i=0;
	while (i<n)
	{
		if (ve[i]<=x)
		{
			if (ve[i]*2>x)
			{
				x=2*ve[i];
				cnt++;
				ans++;
			}
			i++;
			continue;
		}

		// if (ve[i]>x)
		// -> use largest number to increase ur x ;
	
		if (i==n-1)
		{

			while (x<ve[i])
			{
				x=x*2;
				ans++;
			}

			break;

		} 
		else
		{

			if (x<=ve[n-1]/2)
			{
				x=x*2;
				ans++;
			}
			else
			{
				ans++;
				break;
			}
		}
	}

	ans+=n-cnt;

	cout<<ans<<endl;
}
main() 
{
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
