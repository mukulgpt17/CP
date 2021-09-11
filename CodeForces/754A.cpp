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
	
	vector<ll> vec(n);
	vector<ll> pre(n);
	vector<ll> pos(n);
	
	
	for (int i=0;i<n;i++)
	{
		cin>>vec[i];
		if (i==0)
		pre[i]=vec[i];
		else
		{
			pre[i]=pre[i-1]+vec[i];
		}
	}
	
//	for (int i=0;i<n;i++)
//	{
//		cout<<vec[i]<<" ";
//	}
//	cout<<endl;
//	for (int i=0;i<n;i++)
//	{
//		cout<<pre[i]<<" ";
//	}
//	cout<<endl;
	for (int i=n-1;i>=0;i--)
	{
		if (i==n-1)
		{
			pos[i]=vec[i];
		}
		else
		{
			pos[i]=pos[i+1]+vec[i];
		}
	}
	
	if (pre[n-1]!=0)
	{
		cout<<"YES"<<endl;
		cout<<1<<endl;
		cout<<1<<" "<<n<<endl;
		return ;
	}
	
	for (int i=0;i<n;i++)
	{
		if(pre[i]!=0 && pos[i+1]!=0)
		{
			cout<<"YES"<<endl;
			cout<<2<<endl;
			cout<<1<<" "<<i+1<<endl;
			cout<<i+2<<" "<<n<<endl;
			return ;
		}
	}
	cout<<"NO"<<endl;
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

