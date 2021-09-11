#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;

ll arr[100005];


void solve()
{
	ll n;
	cin>>n;
	
	cout<<arr[n]<<endl;
	return ;
}

int main()
{	

	arr[1]=1;
	arr[2]=2;
	arr[3]=4;
	arr[4]=8;
	
	for(int i=5;i<=100000;i++)
	{
		arr[i]=arr[i-1]*2;
		arr[i]%=1000000007;	
	}	
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

