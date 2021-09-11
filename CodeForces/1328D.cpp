#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
using namespace std;


void fun()
{
	ll n ;
	cin>>n;
	ll cp=0;
	
	vector<ll> vc;
	ll temp;
	ll prev=-1;
	unordered_set<ll> s;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		vc.pb(temp);
		s.insert(temp);
		if (temp!=prev)
		{
			prev=temp;
			cp++;
		}
	}
	
	if (s.size()==1)
	{	cout<<1<<endl;
		for (int i=0;i<n;i++)
		cout<<1<<" ";
		cout<<endl;
		return ;	
	}
	if (n%2==0)
	{
		cout<<2<<endl;
		int te=1;
		for (int i=0;i<n;i++)
		{
			cout<<te<<" ";
			if (te==1)
			te=2;
			else
			te=1;
		}
		cout<<endl;
		return ;
	}
	else
	{
		for (int i=0;i<vc.size();i++)
		{
			if(vc[(i)%vc.size()]==vc[(i+1)%vc.size()])
			{	cout<<2<<endl;
				if ((i)%2==0)
				{	int te=1;
					for (int j=0;j<=i-1;j++)
					{
						cout<<te<<" ";
						if (te==1)
						te=2;
						else
						te=1;	
					}
					cout<<1<<" ";
					if (i==vc.size()-1)
					return ;
					cout<<1<<" ";
				    te=2;
					for (int j=i+2;j<vc.size();j++)
					{
						cout<<te<<" ";
						if (te==1)
						te=2;
						else
						te=1;
					}
					cout<<endl;
					return ;
				}
				else
				{
					
					int te=1;
					for (int j=0;j<=i-1;j++)
					{
						cout<<te<<" ";
						if (te==1)
						te=2;
						else
						te=1;	
					}
					cout<<2<<" ";
					if (i==vc.size()-1)
					return ;
					cout<<2<<" ";
					 te=1;
					for (int j=i+2;j<vc.size();j++)
					{
						cout<<te<<" ";
						if (te==1)
						te=2;
						else
						te=1;
					}
					cout<<endl;
					return ;	
				}
			}	
		}
		
		cout<<3<<endl;
		int te=1;
		for (int i=0;i<vc.size()-1;i++)
		{
			cout<<te<<" ";
			if (te==1)
			te=2;
			else
			te=1;
		}
		cout<<3<<" ";
		cout<<endl;
	}
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

