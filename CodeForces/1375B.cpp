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
	ll m,n;
	cin>>m>>n;
	
	ll arr[m][n];
	
	for (ll i=0;i<m;i++)
	{
		for (ll j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	
	for (ll i=0;i<m;i++)
	{
		for (ll j=0;j<n;j++)
		{	
			ll pos=0;
			
			if (i-1>=0)
			pos++;
			if(i+1<m)
			pos++;
			if (j-1>=0)
			pos++;
			if (j+1<n)
			pos++;
				
			if(arr[i][j]>pos)
			{
				cout<<"NO"<<endl;
				return;
			}	
			
			arr[i][j]=pos;
				
			}
	}
	cout<<"YES"<<endl;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";			
		}
		cout<<endl;
	}
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

