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
	
	int t=INT_MIN;
	int a;
	for (int i=0;i<n;i++)
	{
		cin>>a;
		t=max(t,a);
	}

	if (t<=25)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<t-25<<endl;
	}

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

