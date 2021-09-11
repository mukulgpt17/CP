#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)

//#define mod 1e9+7

const int mod = 998244353;
using namespace std;
ll find_do(ll a,ll b)
{
	long long res = 1;
	ll m=mod;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll find_bo(ll n)
{
	if (n<=2)
	{
		return 1;
	}
	ll prev=1;
	ll curr=1;
	ll temp;
	for (int i=3;i<=n;i++)
	{	temp=curr;
		curr=(curr+prev)%mod;
		prev=temp;
	}
	return curr%mod;
}

ll find_bo2(ll n)
{	

	if (n==1)
	return 1;
	
	if (n==2)
	return 1;
	
	if (n==3)
	return 2;
 
	ll arr[n+1];
	arr[0]=1;
	arr[1]=1;
	arr[2]=1;
	arr[3]=2;
	
	
	
	for (int i=4;i<=n;i++)
	{
		arr[i]=arr[i-1]%mod;
		ll x=1;
		while (i-(2*x+1)>=0)
		{
			arr[i]=(arr[i]%mod+arr[i-(2*x+1)]%mod)%mod;
			x++;
		}
		
	}
	
	return arr[n+1];
}


void fun()
{
	ll n;
	cin>>n;
	
	ll fi=find_bo(n);
//	cout<<fi<<endl;
	ll nn =find_do(2,n);
	ll down=find_do(nn,mod-2);
//	cout<<down<<endl;
	ll final=((fi)*(down))%mod;
	cout<<final<<endl;

}

int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

