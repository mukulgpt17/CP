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
	
	vector<ll> vec(n);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	ll tt=1;
	ll count=1;
	ll prev;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			prev=vec[i];
		}
		else
		{
			if (vec[i]==prev)
			{
				tt++;
//				cout<<tt<<endl;	
			}
			else
			{
				count=max(count,tt);
				tt=1;
				prev=vec[i];
			}
		}
	}
	count=max(count,tt);
	cout<<count<<endl;
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

