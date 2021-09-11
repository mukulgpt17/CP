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
	int n,a,b;
	cin>>n>>a>>b;
	int t;
	int aa=INT_MIN;
	int bb=INT_MIN;
	
	for (int i=0;i<a;i++)
	{
		cin>>t;
		aa=max(aa,t);
	}
	
	for (int i=0;i<b;i++)
	{
		cin>>t;
		bb=max(bb,t);
	}
	
	if(aa>bb)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
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

