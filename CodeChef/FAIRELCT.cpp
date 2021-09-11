#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)

int dp[4001][4001];
using namespace std;
void solve()
{	
	
	ll n,m;
	cin>>n>>m;
		
	vector<ll> a;
	vector<ll> b;
	
	ll t;
	ll sum1=0;
	ll sum2=0;
	Loop(i,0,n)
	{
		cin>>t;
		a.pb(t);
		sum1+=t;
	}
	
	Loop(i,0,m)
	{
		cin>>t;
		b.pb(t);
		sum2+=t;
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	reverse(b.begin(),b.end());
	
	ll count=0;
	ll ind=0;
	ll flag=0;
	while (sum1<=sum2 && ind<min(n,m))
	{	//cout<<a[ind]<<b[ind]<<endl;
		if (b[ind]>a[ind])
		{
			sum1=sum1-a[ind]+b[ind];
			sum2=sum2-b[ind]+a[ind];
			count++;
			ind++;
		}
		else
		{
			flag=1;
			break;
		}
	}
	
	if (flag==0)
	{	if (sum1>sum2)
		cout<<count<<endl;
		else
		cout<<-1<<endl;
	}
	else
	{
		cout<<-1<<endl;
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

