#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)

// not solved !! 
using namespace std;
void solve()
{
	
	ll n;
	cin>>n;
	
	vector<ll> v;
	v.pb(1);
	ll prod=1;
	for(ll i=2;i<n;i++)
	{
		if(__gcd(i,n)==1)
		{
			v.pb(i);
			prod=(prod*i)%n;
		}
	}
	
	if (prod==1)
	{	
	cout<<v.size()<<endl;
	for (int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	}
	else
	{
		cout<<v.size()-1<<endl;
		for (int i=0;i<v.size();i++)
		{
			if (v[i]!=prod)
			{
				cout<<v[i]<<" ";
			}
		}
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

