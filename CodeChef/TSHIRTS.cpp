#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define MOD 1000000007



using namespace std;
ll dp[1025][105];
vector<ll> arr[107];
ll P;
ll fun_dp(ll p,ll id)
{
	if (p==P)
	{
		return dp[p][id]=1ll;
	}
	if (id==101)
	{
		return dp[p][id]=0ll;
	}
	if (dp[p][id]!=-1)
	{
		return dp[p][id];
	}
	else
	{
			
		ll ans=0;
		
		ans=(ans%MOD + fun_dp(p,id+1)%MOD)%MOD;
		
		for (auto k:arr[id])
		{
			ll xx=p &(1<<(k-1));
			ll yy=p|(1<<(k-1));
			
			if(xx==0)
			{
				ans=(ans%MOD + fun_dp(yy,id+1)%MOD)%MOD;
			}				
		}
		
		return dp[p][id]=ans;			
	}	
}
void fun()
{
	
	memset(dp,-1,sizeof(dp));
	ll n;
	cin>>n;
	getchar();
	for (int i=0;i<=100;i++)
	arr[i].clear();
	string ss,temp;
 	for(int i=1; i<=n; i++)
    {
        getline(cin,ss);
        stringstream s (ss);
        while(s>>temp)
            arr[(stoi(temp))].push_back(i);   
    }
    P=(1<<n)-1;
	cout<<fun_dp(0,1)<<endl;
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

