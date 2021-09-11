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
	
	vector<ll> ve;
	ll tt;
	for (int i=0;i<n;i++)
	{
		cin>>tt;
		ve.pb(tt);
	}
	
	vector<pair<ll,ll>> pr;
	
	for (int i=0;i<n;i++)
	{
		
		ll mini=ve[i];
		ll id=i;
		
		for (int j=i+1;j<n;j++)
		{
			if (ve[j]<mini)
			{
				mini=ve[j];
				id=j;	
			}	
		}
		
		if(mini!=ve[i])
		{
			swap(ve[i],ve[id]);
			pr.pb({i,id});
		}
	}
	
	cout<<pr.size()<<endl;
	for (int i=0;i<pr.size();i++)
	{
		cout<<pr[i].first<<" "<<pr[i].second<<endl;
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

