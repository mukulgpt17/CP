#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;
void fun()
{
	ll n;
	cin>>n;
	ll ev=0;
	ll od=0;
	ll temp;
	for(ll i=0;i<2*n;i++)
	{

		cin>>temp;
		if (temp%2)
			od++;
		else
			ev++;
	}

	if (od==ev)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}


}


int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}
