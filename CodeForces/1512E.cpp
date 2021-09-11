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
	ll n,l,r,s;
	cin>>n>>l>>r>>s;
	ll arr[n+1];
	ll k=r-l+1;
	set<ll> sse;
	for (int i=1;i<=n;i++)
	sse.insert(i);
	set<ll> ss;
	
	for(int i=n;i>=1;i--)
	{	if (k>0)
		{
		
			if(s<=(k*(2*n+1-k))/2)
			{
				if (s-i>=(k*(k-1))/2)
				{	//cout<<i<<" ";
					s=s-i;
					k--;
					ss.insert(i);
					sse.erase(i);
				}
			}
		}
	}
//	cout<<endl;
//	cout<<s<<endl;
	if(s>0)
	{
		cout<<-1<<endl;
	}
	else
	{
		int ind=l;
		for (auto i=ss.begin();i!=ss.end();i++)
		{
			arr[ind]=*i;
			ind++;
		}	
		ind =1;
		
		for(auto i=sse.begin();i!=sse.end();i++)
		{
			if (ind==l)
			{
			ind=r+1;	
			}	
			arr[ind]=*i;
			ind++;
		}
		
		for (int i=1;i<=n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
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

