#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> ve;
	vector<int> vec;
	int t;
	
	for (int i=1;i<=n;i++)
	{
		cin>>t;
		ve.push_back(t);
	}
	for(int i=1;i<=m;i++)
	{
		cin>>t;
		vec.push_back(t);
	}

	int curr=0;
	
	for (int i=0;i<n;i++)
	{	int x=INT_MAX;
		int ind;
		for (int j=0;j<m;j++)
		{
			int te=ve[i]&vec[j];
			cout<<te<<" ";
			if (te<x)
			{
				x=te;
				ind=j;
			}
		}	
		
		curr=curr|x;
		cout<<"-> "<<curr<<endl;	
	}
	cout<<curr<<endl;

}

void fun2()
{
	int n,m;
	cin>>n>>m;
	
	vector<int> a;
	vector<int> b;
	
	int t;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		a.pb(t);
	}
	
	for(int i=1;i<=m;i++)
	{
		cin>>t;
		b.pb(t);
	}
	
	
	for(int i=0;i<512;i++)
	{	int flag=0;
		for (int j=0;j<n;j++)
		{	int flag2=0;
			for (int k=0;k<m;k++)
			{
				if (((a[j]&b[k])|i)==i)
				{
					flag2=1;
					break;
				}
			}
			if (flag2==0)
			{	
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
			cout<<i<<endl;
			return ;
		}
		
	}
	

}


int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 fun2();
	}
 return 0;
}

