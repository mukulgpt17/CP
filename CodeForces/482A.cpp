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
	ll n ,k;
	cin>>n>>k;
	
	set<ll> ss;
	
	vector<ll> ve;
	ll flag=0;
	ll ii=1;
	ll ee=k+1;
	for (int i=1;i<=k+1;i++)
	{
		if (flag==0)
		{
			ve.pb(ii);
			ii++;
		}
		else
		{
			ve.pb(ee);
			ee--;
		}
		flag=flag^1;
	}
	
	
	for (int i=k+2;i<=n;i++)
	{
		ve.pb(i);
	}
	
	for (int i=0;i<n;i++)
	{
		cout<<ve[i]<<" ";
	}
	cout<<endl;
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

