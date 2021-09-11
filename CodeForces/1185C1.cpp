#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

void solve()
{
  
ll n,m;
cin>>n>>m;

vector<ll> ve(n);
vector<ll> su(n);


for (int i=0;i<n;i++)
{
	cin>>ve[i];
	if (i==0)
	{
		su[i]=ve[i];
	}
	else
	{
		su[i]=ve[i]+su[i-1];
	}
}
/*
for (int i=0;i<n;i++)
{
	cout<<su[i]<<" ";

}
cout<<endl;
*/
vector<ll> ans(n);

for (int i=0;i<n;i++)
{
	if (su[i]<=m)
	{
		ans[i]=0;
	}
	else
	{
		ll flag=1;
		sort(ve.begin(),ve.begin()+i);
		// for(auto j:ve)
		// {
		// 	cout<<j<<" ";
		// }
		// cout<<endl;
		ll ttt=su[i];
		for (int j=i-1;j>=0;j--)
		{
			if (ttt-ve[j]<=m)
			{
				ans[i]=i-j;
				flag=0;
				break;
			}
			else
			{
				ttt-=ve[j];
			}
		}
		if (flag==1)
		{
			ans[i]=i;
		}
	}
}

for (int i=0;i<n;i++)
{
	cout<<ans[i]<<" ";
}
cout<<endl;
  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t=1;
    // cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
