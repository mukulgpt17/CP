#include<bits/stdc++.h>
using namespace std;
int chain[100001];
int A[100001];
int B[100001];
long long  Len[100001];
void fun()
{
	
	int n;
	cin>>n;
	int a;
	int temp;
	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		chain[i]=temp;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		A[i]=temp;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		B[i]=temp;
	}
	Len[1]=0;
	long long maxi=0;
	for (int i=2;i<=n;i++)
	{
		
		if (A[i]==B[i])
		{
			Len[i]=chain[i]+1;
		}	
		else if (B)
		{
			Len[i]=chain[i]+1 +max(1ll*abs(B[i]-A[i]),Len[i-1]-1ll*abs(B[i]-A[i]));
		}
		
		maxi=max(maxi,Len[i]);	
	}	
	
	cout<<maxi<<endl;
}
int main()
{
	int t;
	cin>>t;	
	while (t--)
   		fun();
   return 0;
   
}

