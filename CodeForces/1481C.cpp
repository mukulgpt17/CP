#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;
set<ll> arr[100009];
ll ip[100009];
ll bp[100009];
void fun()
{
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		arr[i].clear();
	}
	
	ll temp;
	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		ip[i]=temp;
	}
	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		bp[i]=temp;
	}
	vll painter;
	for(int i=1;i<=m;i++)
	{
		cin>>temp;
		painter.pb(temp);
	}
	
	for(int i=1;i<=n;i++)
	{
		if (ip[i]!=bp[i])
		{
			arr[bp[i]].insert(i);
		}
	}
	
	vll answer;
	ll x;
	int flag=0;
	ll t=painter[painter.size()-1];
	
	if (arr[t].size()!=0)
	{
		x=*(arr[t].begin());
		flag=1;
		arr[t].erase(x);
	}
	else
	{
		for (int i=1;i<=n;i++)
		{
			
			if (ip[i]==t && bp[i]==t)
			{
				x=i;
				flag=1;
				break;	
			}	
		}	
	}
//	cout<<x<<endl;
	if (flag==1)
	{
		for (int i=1;i<m;i++)
		{
			if (arr[painter[i-1]].size()!=0)
			{
				ll tt=*(arr[painter[i-1]].begin());
				answer.pb(tt);
				arr[painter[i-1]].erase(tt);
				ip[tt]=painter[i-1];
			}
			else
			{
				answer.pb(x);
				ip[x]=painter[painter.size()-1];
			}
		}
		answer.pb(x);
		ip[x]=painter[painter.size()-1];
	//	ll fl=1;
		for (int i=1;i<=n;i++)
		{
			if (ip[i]!=bp[i])
			{cout<<"NO"<<endl;
			return;
			}
		}
		cout<<"YES"<<endl;
		for (int i=0;i<answer.size();i++)
		{
			cout<<answer[i]<<" ";	
				
		}	
		cout<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
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

