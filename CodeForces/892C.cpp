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
	
	vector<ll> ve(n+1);
	vector<ll> mark(n+1,0);
	for(int i=1;i<=n;i++)
	{
		cin>>ve[i];
	}
	ll prev=0;
	
	for(int i=2;i<=n;i++)
	{
		ll ind=max(i-ve[i],1ll*1);
		if (ind<i)
		{
			mark[ind]+=1;
			mark[i]+=-1;
		}
	}
	
	for (int i=2;i<=n;i++)
	{
		mark[i]=mark[i-1]+mark[i];
	}
//	for(int i=1;i<=n;i++)
//	{
//	cout<<mark[i]<<" ";
//	}
//	cout<<endl;
	ll count=0;
	for (int i=1;i<=n;i++)
	{
		if (mark[i]==0)
		count++;
	}
	cout<<count<<endl;
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

