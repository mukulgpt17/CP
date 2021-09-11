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
	
	ll ans=6;
	for (int i=3;i<n;i++)
	{
		ans+=i*(i+1);
	}
	// 123 134 145 
	cout<<ans<<endl;

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

