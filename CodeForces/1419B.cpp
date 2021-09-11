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
	
	ll answer=0;
	ll st=1;
	while (n>0)
	{
		if ((st*(st+1))/2<=n)
		{
			cout<<st<<endl;
			answer++;
		}
		
		n-=(st*(st+1))/2;
		st+=2;
	}
	cout<<answer<<endl;
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

