#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void fun()
{
	ll n,k;
	cin>>n>>k;
	
	vector<ll> vec;
	ll temp;
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		vec.pb(temp);		
	}
	
	ll l=vec[0];
	ll r=vec[0];
	int i;
	for (i=1;i<vec.size()-1;i++)
	{
		if (vec[i]<l-2*(k-1) || vec[i]> r+k-1)
		{
			cout<<"NO"<<endl;
			return ;
		}
		
		l=max(l-(k-1),vec[i]);
		r=min(r+(k-1),vec[i]+k-1);
//		cout<<l<<" "<<r<<endl;
	}
	if (vec[n-1]<l-(k-1) || vec[n-1]>r+(k-1))
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	return ;

}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

