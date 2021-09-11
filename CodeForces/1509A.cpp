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
	
	vector<int> od;
	vector<int> ev;
	
	int t;
	for (int i=1;i<=n;i++)
	{
		cin>>t;
		if (t%2)
		od.pb(t);
		else
		ev.pb(t);
	}
	
	for (int i=0;i<od.size();i++)
	{
		cout<<od[i]<<" ";
	
	}
	for (int i=0;i<ev.size();i++)
	{
		cout<<ev[i]<<" ";
	}
	cout<<endl;

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

