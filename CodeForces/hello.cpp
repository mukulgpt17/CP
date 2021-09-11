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
	for (int i=0;i<n;i++){
		cin>>vec[i];
	}
	
	ll count=1;
	
	for (int i=0;i<n;i++)
	{
		ll temp=vec[i];
		ll tt=0;
		for(int j=1;j*j<=temp;j++)
		{
			if (temp%j==0)
			{
				ll a =temp/j;
				ll b=j;
				if ((a+b)%2==0 && abs(a-b)%2==0)
				tt++;
			}
		}
//		cout<<tt<<" ";
		if (tt!=0)
		{
			count*=tt;
			count%=1000000007;
		}
		else
		{
			count=0;
			break;
		}
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

