#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;

int prime[1000009];

void fun()
{
	int n;
	cin>>n;
	
	cout<<prime[n]-prime[(int)floor(sqrt(n))]+1<<endl;
}

int main()
{
	int t;
	cin>>t;
	int n=1000009;
	memset(prime,-1,sizeof(prime));
	prime[1]=1;
		
	for (ll i=2;i*i<=n;i++)
	{	
		if (prime[i]==-1)
		{		
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=0;
			}
		}
	}
//	cout<<"i was "<<endl;
	for (int i=2;i<=n;i++)
	{
		prime[i]=abs(prime[i])+abs(prime[i-1]);
	}	
	while (t--)
	{
//	 fun();
	int n;
	cin>>n;
	cout<<prime[n]-prime[(int)floor(sqrt(n))]+1<<endl;
	}
 return 0;
}

