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
	ll n, m;
	cin>>n>>m;
	
	vector<ll> ve(n+1,-1);
	vector<ll> pro(m+1);
	vector<ll> time(m+1);
	
	for(int i=1;i<=m;i++)
	{
		ll l ,r,t,c;
		cin>>l>>r>>t>>c;
		pro[i]=c;
		time[i]=t;
		
		for (int j=l;j<=r;j++)
		{
			if (ve[j]==-1 || time[ve[j]]>time[i])
			{
				ve[j]=i;
			}
		}
	}
	
	
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		if (ve[i]!=-1)
		ans+=pro[ve[i]];
	}
	cout<<ans<<endl;
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

