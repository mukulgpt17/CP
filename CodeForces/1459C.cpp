#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void fun()
{
	ll n,m;
	cin>>n>>m;
	
	vector<ll> a;
	vector<ll> b;
	ll tmp;
	for (int i=1;i<=n;i++)
	{
		cin>>tmp;
		a.pb(tmp);
	}
	sort(a.begin(),a.end());
	
	for (int i=1;i<=m;i++)
	{
		cin>>tmp;
		b.pb(tmp);
	}
	
	ll ans=0;
	for (int i=2;i<=n;i++)
	{
		ans=__gcd(ans,a[i-1]-a[0]);
	}
	
	for (int i=1;i<=m;i++)
	{
		cout<<__gcd(b[i-1]+a[0],ans)<<" ";
	}
	cout<<endl;


}

int main()
{
	int t=1;
	//cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

