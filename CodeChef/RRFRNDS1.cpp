#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define M 6
using namespace std;


bitset<M> arr[20009];
void fun()
{
	ll n;
	cin>>n;
	string s;
	for (int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=s.size();j++)
		{
			if (s[j-1]=='1')
			arr[i][j]=1;
			else
			arr[i][j]=0;
		}
	}
	
	ll count=0;
	
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{	if (i==(j))
			continue;		
			if (arr[i][j]==0)
			{	
				bitset<M> f1=arr[i];
				bitset<M> f2=arr[j];
				bitset<M> f3=f1&f2;
			//	cout<<f1<<endl;
			//	cout<<f2<<endl;
				if(f3.any())
				count++;
			}
		}
	}
	
	cout<<count<<endl;
	

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

