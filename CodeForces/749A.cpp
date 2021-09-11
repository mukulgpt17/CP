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
	ll n ;
	cin>>n;
	
	if(n%2)
	{
		ll count=(n-3)/2;
		count++;
		cout<<count<<endl;
		for (int i=0;i<count-1;i++)
			{
				cout<<2<<" ";
				}
				cout<<3<<endl;
		
	}
	else
	{
		ll count=n/2;
		cout<<count<<endl;
		for (int i=0;i<count;i++)
		{
			cout<<2<<" ";
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

