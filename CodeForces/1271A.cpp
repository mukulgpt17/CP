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
	ll a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	ll cost=0;
	if (e>f)
	{
		cost+=min(a,d)*e;
		d=d-min(a,d);
		cost+=min(b,1ll*min(c,d))*f;
		
	}
	else
	{
		cost=min(b,min(c,d))*f;
		d=d-min(b,min(c,d));
		cost+=min(a,d)*e;
	}

	cout<<cost<<endl;
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

