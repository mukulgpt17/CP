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
	
	map<ll,ll> mp;
	ll ans=0;
	ll t;
	for (int i=1;i<=n;i++)
	{
		
		cin>>t;
		if (t-i>=0)
		{
			if (mp.find(t-i)!=mp.end())
			{
				ans+=mp[t-i];
				mp[t-i]++;
			}
			else
			{
				mp[t-i]=1;
			}
		}
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

