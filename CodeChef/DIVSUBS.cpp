#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;


vector<ll> vc(100009);
vector<ll> sum(100009);
vector<ll> rem(100009);
//unordered_map<ll,ll> mp;

void fun1()
{
	ll n;
	cin>>n;
	ll temp;
	
//	cout<<"N "<<n<<endl;
	if(n==1)
	{
		cin>>temp;
			cout<<1<<endl;
			cout<<1<<endl;	
		return ;
		
	}
	
	for (int i=0;i<=n;i++)
	rem[i]=0;
	
	rem[0]=1;
	ll flag=0;
	ll index=0;
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		vc[i]=temp;
		
		if (temp%n==0)
		{	flag=1;
			index=i;
			//cout<<1<<endl;
			//cout<<i+1<<endl;
			//return ;
		}
		
		if (i==0)
		{
			sum[0]=vc[0]%n;
		}
		else
		{
			sum[i]=(sum[i-1]+vc[i])%n;
		}
	}
	if (flag==1)
	{
		cout<<1<<endl;
		cout<<index+1<<endl;
		return ;
	}
	int i=0;
	for (;i<n;i++)
	{
		if (sum[i]==0)
		{
			cout<<i+1<<endl;
			for (int j=0;j<=i;j++)
			{
				cout<<j+1<<" ";
			}
			cout<<endl;
			return;
		}
		else
		{
			ll tt=sum[i];
			if (rem[tt]==1)
			{
					break;
			}	
			else
			{
				rem[tt]=1;
			}
					
		}
	}
	for (int j=0;j<=i;j++)
	{
		if (sum[j]==sum[i])
		{
			cout<<i-j<<endl;
			for (int k=j+1;k<=i;k++)
			{
			 	cout<<k+1<<" ";	
			}	
			cout<<endl;
			return ;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun1();
	}
 return 0;
}

