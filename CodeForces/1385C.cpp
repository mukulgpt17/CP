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
	
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}
	
	if (n==1)
	{
		cout<<0<<endl;
		return ;
	}
	
	
	ll pos=n-1;
	while (pos>0)
	{
		if (ve[pos-1]>=ve[pos])
		{
			pos--;
		}
		else break;
	}
	while (pos>0)
	{
		if (ve[pos-1]<=ve[pos])
		{
			pos--;
		}
		else break;
	}
	
	cout<<pos<<endl;
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

