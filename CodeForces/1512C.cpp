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
	ll a,b;
	cin>>a>>b;
	
	ll x=__gcd(a,b);
	ll lc=(a*b)/x;
	
	if (lc)
	
	cout<<"YES"<<endl;
	if (a*(b-1)==a)
	{
		cout<<2*a*(b)-a<<" "<<a<<" "<<2*a*b<<endl;
	}
	else
	{
		cout<<a*(b-1)<<" "<<a<<" "<<a*b<<endl;
	}
	
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

