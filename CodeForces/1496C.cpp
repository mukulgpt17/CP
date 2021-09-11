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
	ll t;
	for (int i=0;i<n;i++)
	{
		cin>>t;
		vec.pb(t);
	}
	
	ll l=vec[0];
	ll h=vec[0];
	int i;
	for (i=1;i<vec.size()-1;i++)
	{
		if (vec[i]+k-1<l+1|| vec[i]+1>h+k-1)
		{
			cout<<"NO"<<" "<<i<<endl;
			return ;
		}
		l=max(l-k+1,vec[i]);
		h=min(h+k-1,vec[i]+k-1);
		
	}
	i++;
	if (vec[i]+k-1<l+1|| vec[i]+1>h+k-1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}


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

