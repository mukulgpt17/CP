#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
int arr[101];
void fun()
{
	int n;
	cin>>n;
	int temp;
	memset(arr,0,sizeof(arr));
	int maxi=1;
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		arr[temp]++;
		maxi=max(maxi,arr[temp]);
	}
	
	cout<<maxi<<endl;
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

