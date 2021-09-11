#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)
using namespace std;

map<ll,vector<ll>> mp;
pair<ll,ll> cus[100009];

bool cmp(ll a,ll b)
{
	if(cus[a].second<cus[b].second)
	return true;
	else
	return false;
}

ll solve2(ll p )
{
	sort(mp[p].begin(),mp[p].end(),cmp);
	if(mp[p].size()==1)
	return 1;
	
	ll cc=1;
	ll en=cus[mp[p][0]].second;
	
	for (int i=1;i<mp[p].size();i++)
	{
		if(cus[mp[p][i]].first>=en)
		{
			cc++;
			en=cus[mp[p][i]].second;
		}
	}
	
	return cc;
}
void solve()
{
	ll n,k;
	cin>>n>>k;
	
	mp.clear();
	if (n==0 || k==0)
	{
		cout<<0<<endl;
		return ;
	}
	ll s,e,p;
	for(int i=0;i<n;i++)
	{	cin>>s>>e>>p;
		mp[p].push_back(i);
		cus[i]={s,e};
	}
	ll count=0;
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		count+=solve2(i->first);
	}
	cout<<count<<endl;
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

