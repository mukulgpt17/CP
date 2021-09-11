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
	
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	
	int l=0;
	int r=n-1;
	ll sumi=0;
	while(l<r)
	{
		sumi+=arr[r]-arr[l];
		
		if (arr[r-1]-arr[l]<arr[r]-arr[l+1])
		{
			r--;
		}
		else
		{
			l++;
		}
		
	}

	cout<<sumi<<endl;
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

