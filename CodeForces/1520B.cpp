#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;

//int arr[1000000009];
void solve()
{
	ll n;
	cin>>n;
	ll te=n;
	ll ans=0;
	int po=0;
	int num=0;
	while (n!=0)
	{
		num=n%10;
		po++;
		n=n/10;
	}
	
	ans+=(po-1)*9;
	
	ans+=(num-1);
	
	ll flag=0;
	po--;
//	cout<<po<<endl;
//	cout<<num<<endl;
	while (po>=0)
	{	//cout<<num*(pow(10,po))<<endl;
		te=te-num*(pow(10,po));
		po--;
	}
	
	if (te>=0)
	ans++;
	
	
	cout<<ans<<endl;
	
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

