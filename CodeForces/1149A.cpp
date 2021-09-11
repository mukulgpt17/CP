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
	vector<ll> ve;
	ll temp;
	ll count1=0;
	ll count2=0;
	for (int i=0;i<n;i++)
	{
		cin>>temp;
//		ve.push_back(temp);
		if(temp==1)count1++;
		else count2++;
	}
	
//	sort(ve.begin(),ve.end());
	
	if (count2!=0)
	{	
			cout<<2<<" ";
		count2--;
	}
	if(count1!=0)
	{
		cout<<1<<" ";
		count1--;
	}

	for (int i=0;i<count2;i++)
	{
		cout<<2<<" ";
	}
		for (int i=0;i<count1;i++)
	{
		cout<<1<<" ";
	
	}
	cout<<endl;
	
	
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

