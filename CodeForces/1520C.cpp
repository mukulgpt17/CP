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
	if (n==2)
	{
		cout<<-1<<endl;
		return;
	}
	 int arr[n][n];
	
	ll i=1;
	for (int j=0;j<n;j++)
	{
		int r=0;
		int c=(r+j)%(n);
		arr[r][c]=i;
		i++;
		for(int k=1;k<n;k++)
		{
			r=(r+1)%(n);
			c=(c+1)%(n);
//			cout<<r<<" "<<c<<" ";			
			arr[r][c]=i;
			i++;
		}
//		cout<<endl;
	}
	
	for (int i=0;i<n;i++)
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

