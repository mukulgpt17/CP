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
	
	ll n,s;
	cin>>n>>s;
	
	vector<ll> ve(n);
	ll mini=INT_MAX;
	ll sumi=0;
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
		mini=min(mini,ve[i]);
		sumi=sumi+ve[i];
	}
	if (sumi<s)
	{
		cout<<-1<<endl;
		return ;
	}
	sort(ve.begin(),ve.end());
	
	reverse(ve.begin(),ve.end());
	
	ll ans=0;
	
	for (int i=0;i<n;i++)
	{
		if (ve[i]>mini)
		{
			ans+=ve[i]-mini;
		}
	}
	
	if (ans>=s)
	{
		cout<<mini<<endl;
	}
	else
	{
		s=s-ans;
		ll temp=(int)(ceil((double)s/n));
		mini=mini-temp;
		cout<<mini<<endl;
			
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

