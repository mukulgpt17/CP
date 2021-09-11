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
	ll arr[n];
	ll ev[n];
	ll od[n];
	ll te;

	for (ll i=0;i<n;i++)
	{
		cin>>te;
		arr[i]=te;
		if(i==0)
		{
			ev[0]=te;
			od[0]=0;
		}
		else
		{
			if (i%2==0)
			{
				ev[i]=ev[i-1]+arr[i];
				od[i]=od[i-1];
			}
			else
			{
				ev[i]=ev[i-1];
				od[i]=od[i-1]+arr[i];
			}
		}
	}
	
	int curr=ev[n-1];
//	cout<<curr<<endl;
//	cout<<od[n-1]<<endl;
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j+=2)
		{	//cout<<i<<" "<<j<<" ";
			int temp=0;
			if (i==0)
			{
				temp+=od[j];
				temp+=ev[n-1]-ev[j];
				curr=max(temp,curr);
			}
			else
			{
				temp+=ev[i-1];
				temp+=od[j]-od[i-1];
				temp+=ev[n-1]-ev[j];
				curr=max(temp,curr);
			}
			//cout<<temp<<endl;
		}
	}
	
	cout<<curr<<endl;
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

