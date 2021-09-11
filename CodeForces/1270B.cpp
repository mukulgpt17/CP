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
	
	for (int i=1;i<n;i++)
	{
		if (abs(ve[i]-ve[i-1])>=2)
		{
			cout<<"YES"<<endl;
			cout<<i<<" "<<i+1<<endl;
			return ;
		}
	}
	
	cout<<"NO"<<endl;
		
	
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

