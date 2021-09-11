#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;


void solve()
{
	ll n;
	cin>>n;
	
	ll t;
	cin>>t;
	vector<ll> vp;
	vp.pb(t);
	ll k=0;
	for (ll i=2;i<=n;i++)
	{
		cin>>t;
		ll te=__gcd(vp.back(),t);
		if (te==1)
		{
			vp.pb(t);
		}
		else
		{
			vp.pb(1);
			k++;
			vp.pb(t);
		}	
	}
	
	cout<<k<<endl;
	for (int i=0;i<vp.size();i++)
	{
		cout<<vp[i]<<" ";
		
	}
	
}

int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

