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
	
	vector<ll> ve(n);
	vector<ll> te(n);
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];	
		te[i]=ve[i];
	}	
	sort(ve.begin(),ve.end());
	
	ll ans=0;
	for (int i =0 ;i<n;i++)
	{
		ans+=max(te[i]-ve[i],1ll*0);
	}
	
	cout<<ans<<endl;
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

