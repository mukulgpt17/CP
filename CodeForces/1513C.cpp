#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
const int mod =1000000007;
ll dp[200009];
void solve()
{
	string n;
	ll m;
	cin>>n;
	cin>>m;
//	cout<<n<<endl;
	ll ans=0;
	for (int i=0;i<n.size();i++)
	{	//cout<<m+(int)(n[i]-'0')<<endl;
		if ((m+(int)(n[i]-'0'))>=10)
		ans+=dp[m-10+(int)(n[i]-'0')];	
		else
		{
			ans+=1;
		}
		ans%=mod;
	}	
	cout<<ans<<endl;

}

int main()
{	

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	for(int i=0;i<=8;i++)
	{
		dp[i]=2;
	}
	dp[9]=3;
//	dp[10]=4;
	
	for (int i=10;i<=200000;i++)
	{
		dp[i]=(dp[i-9]%mod+dp[i-10]%mod)%mod;
	}
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

