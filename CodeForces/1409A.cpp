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
	ll a,b;
	cin>>a>>b;
	
	ll diff= abs(a-b);
	cout<<(int)ceil((double)diff/10)<<endl;
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

