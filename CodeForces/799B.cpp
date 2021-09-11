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
	int n;
	cin>>n;
	vector<int> prices ;
	vector<int> col1 ;
	vector<int> col2;
	int te;
	for (int i=1;i<=n;i++)
	{
		cin>>te;
		prices.pb(te);
	}
	for (int i=1;i<=n;i++)
	{
		cin>>te;
		col1.pb(te);
	}
	for (int i=1;i<=n;i++)
	{
		cin>>te;
		col2.pb(te);
	}
	int m;
	cin>>m;
	vector<int> people;
	
	for (int i=1;i<=m;i++)
	{
		cin>>te;
		people.pb(te);
	}
	
	map<int,set<pair<int,int>>> mp;
	
	for (int i=0;i<n;i++)
	{
		mp[col1[i]].insert({prices[i],i});
		mp[col2[i]].insert({prices[i],i});
	}
	
	for (int i=0;i<m;i++)
	{
		int c=people[i];
		if (mp.find(c)!=mp.end())
		{
			if (mp[c].empty()!=true)
			{
				cout<<mp[c].begin()->first<<" ";
				int index=mp[c].begin()->second;
				int vv=prices[index];
				int c1=col1[index];
				int c2=col2[index];
				
				mp[c1].erase({vv,index});
				mp[c2].erase({vv,index});
				
			}
			else
			{
				cout<<-1<<" ";
			}
					
		}
		else
		{
			cout<<-1<<" ";
		}		
		
	}
	cout<<endl;

}

int main()
{
	int t=1;
	//cin>>t;
	while (t--)
	{
	 solve();
	}




 return 0;
}

