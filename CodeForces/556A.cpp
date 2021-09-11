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
	
	string s;
	cin>>s;
	
	ll count1=0;
	ll count2=0;
	
	for (int i=0;i<s.size();i++)
	{
		if (s[i]=='1')
		count1++;
		else
		count2++;
	}

	cout<<abs(count1-count2)<<endl;
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

