#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
int arr[6000];
void fun()
{
	int n;
	cin>>n;
	int maxi=1;
	int temp;
	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		arr[i]=temp;	
	}
	
	int count=0 ;
	for (int i=1;i<=n;i++)
	{   if (arr[i]==1)continue;
		count
		for(int j=arr[i]+i;j>i;j--)
		{
			if (arr[j]==1)
			continue;	
			
			
			
		}
	}
		
			
	}
	cout<<count<<endl;	
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

