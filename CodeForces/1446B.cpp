#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

int dp[6000][6000];


using namespace std;
int maxi;
int fun1(string &a,string &b,int n,int m)
{
	if (n==0 || m==0)
	{
		return 0;
	}
	else if (dp[n][m]!=-1)
	{	maxi=max(maxi,dp[n][m]);
		return dp[n][m];
	}
	else
	{
		if (a[n-1]==b[m-1])
		{	
			dp[n][m]=2+max(fun1(a,b,n-1,m-1),0);
			int temp=max(fun1(a,b,n-1,m),fun1(a,b,n,m-1))-1;
			temp=max(0,temp);
			dp[n][m]=max(dp[n][m],temp);
			maxi=max(maxi,dp[n][m]);
			return dp[n][m];	
		}
		else
		{	
			dp[n][m]=max(fun1(a,b,n-1,m),fun1(a,b,n,m-1))-1;
			dp[n][m]=max(0,dp[n][m]);
			maxi=max(maxi,dp[n][m]);
			return dp[n][m];
		}
	}	
}

void fun()
{	maxi=INT_MIN;
	int n,m;
	cin>>n>>m;
	string a ;
	string b;
	cin>>a;
	cin>>b;
	memset(dp,-1,sizeof(dp));
	fun1(a,b,n,m);
	cout<<maxi<<endl;
	
}

int main()
{
	int t;
	t=1;
	while (t--)
	{
	 fun();
	}
 return 0;
}

