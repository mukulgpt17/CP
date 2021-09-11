#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
using namespace std;
int arr[500008];
void fun()
{
	ll n;
	cin>>n;
	ll temp;
	arr[0]=0;
	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		arr[i]=arr[i-1]+temp;
	}
	
	if (arr[n]%3!=0)
		{
			cout<<0<<endl;
			return;
	}
	
	ll div=arr[n]/3;
	ll counti=0;
	ll count=0;
	for (int i=2;i<=n-1;i++)
	{
		if (arr[i]==div)
		{
			counti++;
			if (arr[n]-arr[i]==div)
			{
				count+=counti;
			}
		}
	}

	cout<<count<<endl;
}

int main()
{
	int t;
	t=1;
	while (t--)
	{
	 fun();
	}
 return 0;
}

