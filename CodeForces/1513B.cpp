#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)

const ll mod=1000000007;

using namespace std;
ll solve2(int n)
{
	ll res=1;
	for (int i=2;i<=n;i++)
	{
		res=(res*i)%mod;
	}
	return res%mod;
}


void solve()
{
	int n;
	cin>>n;
	
	vector<int> vec;
	int tt;
	int mini=INT_MAX;
	for (int i=1;i<=n;i++)
	{
		cin>>tt;
		vec.pb(tt);
		mini=min(mini,tt);
		
	}
	
	int ct=0;
	int flag=0;
	for (int i=0;i<n;i++)
	{	
	
		if ((vec[i]&mini)!=mini )
		{
			cout<<0<<endl;
			return ;
		}
		if (vec[i]==mini)
		ct++;
	}
	
	if(ct<2 or flag==1)
	{
		cout<<0<<endl;
		return ;
	}
	
	ll val=solve2(n-2);
	ll val2=((ct%mod)*((ct-1)%mod))%mod;
	
	ll ans=((val%mod)*(val2%mod))%mod;
	cout<<ans<<endl;
}

void solveTestCase()
{
    int MOD=1e9+7;
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    int min1=*min_element(a.begin(),a.end());
    int cnt=0;
    
    for(int x:a)
    {
        if(min1==x)cnt++;
        if((min1&x)!=min1)
        {
            printf("0\n");
            return;
        }
    }
    
    int fact=1;
    for(int i=1;i<=n-2;i++)fact=(1LL*fact*i)%MOD;
    int ans=(1LL * cnt * (cnt-1))%MOD;
    ans = (1LL * ans * fact) % MOD;
    printf("%d\n",ans);
}
int main()
{	
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

