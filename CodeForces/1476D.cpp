#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
void fun()
{
	int n ;
	cin>>n;
	
	string s;
	cin>>s;
	
	int lf[n+1][2];
	int rf[n+1][2];
	
	lf[0][0]=0;
	lf[0][1]=0;
	
	rf[n][0]=0;
	rf[n][1]=0;
	
	for (int i=1;i<=n;i++)
	{
		if(s[i-1]=='L')
		{
			lf[i][0]=lf[i-1][1]+1;
			lf[i][1]=0;
		}
		else
		{
			lf[i][0]=0;
			lf[i][1]=lf[i-1][0]+1;
		}
	}
	
	for (int i=n-1;i>=0;i--)
	{
		if (s[i]=='R')
		{
			rf[i][0]=rf[i+1][1]+1;
			rf[i][1]=0;
		}
		else
		{
			rf[i][0]=0;
			rf[i][1]=rf[i+1][0]+1;
		}
	}
	
	for (int i=0;i<=n;i++)
	{
		cout<<lf[i][0] +rf[i][0]+1<<" ";
	}
	cout<<endl;
	
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

