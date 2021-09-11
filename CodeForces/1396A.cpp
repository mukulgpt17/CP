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
	int n;
	cin>>n;
	
	if (n==1)
	{
		int t;
		cin>>t;
		
				cout<<1<<" "<<1<<endl;
		cout<<0<<" "<<endl;
		
		cout<<1<<" "<<1<<endl;
		cout<<0<<" "<<endl;
		
		cout<<1<<" "<<1<<endl;
		cout<<-1*t<<" "<<endl;
		

	}
	else
	{
		
	
	
	vector<ll> vec;
	ll t;
	for (int i=1;i<=n;i++)
	{
		cin>>t;
		vec.pb(t);
	}
	
	cout<<1<<" "<<1<<endl;
	for (int i=1;i<=1;i++)
	{
		cout<<-1*vec[0]<<endl;
	}
//	cout<<endl;
	
	cout<<2<<" "<<n<<endl;
	for (int i=2;i<=n;i++)
	{
		cout<<(n-1)*vec[i-1]<<" ";
	}
	cout<<endl;
	
	cout<<1<<" "<<n<<endl;
	cout<<0<<" ";
	for (int i=2;i<=n;i++)
	{
		cout<<-1*(n)*vec[i-1]<<" ";
	}
	cout<<endl;
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

