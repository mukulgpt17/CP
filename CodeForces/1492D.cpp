#include<bits/stdc++.h>
#include<vector>

#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;

void fun()
{
	ll a,b,k;
	cin>>a>>b>>k;
	string x="";
	string y="";
	
	
	
	for (int i=0;i<b;i++)
	x+='1';
	for (int i=0;i<a;i++)
	x+='0';
	
	y=x;
	
	
	if (k==0)
	{
		cout<<"Yes"<<endl;
		cout<<x<<endl;
		cout<<y<<endl;
		return;
	}
	if (a==0)
	{
		if (k==0)
		{	cout<<"Yes"<<endl;
			cout<<x<<endl;
			cout<<y<<endl;
			return ;
		}
		else
		{
			cout<<"No"<<endl;
			return ;
		}
	}
	if (b==1)
	{
		if (k==0)
		{
			cout<<"Yes"<<endl;
			cout<<x<<endl;
			cout<<x<<endl;
			return;
		}
		else
		{
			cout<<"No"<<endl;
			return;
		}
	}
	if (k>a+b-2)
	{
	cout<<"No"<<endl;
	return ;
	}
	
	cout<<"Yes"<<endl;
	cout<<x<<endl;
	
	if (k<=a)
	{
		y[b+k-1]='1';
		y[b-1]='0';
		cout<<y<<endl;
		return ;
	}
	else
	{
		y[a+b-1]='1';
		
		y[b-1-(k-a)]='0';
		cout<<y<<endl;
		
	}

}

int main()
{
	int t=1;
	//cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

