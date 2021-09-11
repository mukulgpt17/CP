#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void fun()
{
	int n,k;
	cin>>n>>k;
	
	int a,b,c ;
	int x=(n-(k-3));
	if (x%2)
	{ // correct 
		a=x/2;
		b=x/2;
		c=1;
	}
	else
	{
		if (x%4==0)
		{
			a=x/2;
			b=x/4;
			c=x/4;
		}
		else
		{
			a=2;
			b=(x-2)/2;
			c=(x-2)/2;
		}
	
	}
	
	for (int i=0;i<k-3;i++)
	{
		cout<<1<<" ";
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
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
