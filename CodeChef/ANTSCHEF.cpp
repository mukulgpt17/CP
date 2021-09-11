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
	ll n;
	cin>>n;
	
	vector<int> arr[n];
	
	for (int i=0;i<n;i++)
	{
		ll m;
		cin>>m;
		ll t;
		for(int j=1;j<=m;j++)
		{
			cin>>t;
			arr[i].push_back(t);
		}
	}	
	int pos=0;
	int neg=0;
	for (int j=0;j<arr[0].size();j++)
	{
		if(arr[0][j]>0)
		pos++;
		else
		neg++;
	
	}
	
	cout<<pos*neg<<endl;

}
void solve2()
{
	ll n;
	cin>>n;
	
	pair<vector<ll>,vector<ll>> arr[n+1];
	
	map<ll,ll> mp;
	ll m;
	for (int i=0;i<n;i++)
	{
		cin>>m;
		ll t;
		for (int j=0;j<m;j++)
		{
			cin>>t;
			if (t>0)
			arr[i].first.push_back(t);
			else
			arr[i].second.push_back(t);
			
			mp[abs(t)]++;
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		sort(arr[i].first.begin(),arr[i].first.end());
		sort(arr[i].second.begin(),arr[i].second.end());
		reverse(arr[i].second.begin(),arr[i].second.end());
	}
	
	ull col=0;
	
	for (int i=0;i<n;i++)
	{
		int i1=0;
		int i2=0;
		
		while (i1<arr[i].first.size() && i2<arr[i].second.size())
		{	//out<<arr[i].first[i1]<<endl;
			if (abs(arr[i].first[i1])<abs(arr[i].second[i2]))
			{
				if (mp[abs(arr[i].first[i1])]>1)
				{
				//	col++;
					col+=(arr[i].first.size()-1-i1);
				}
				else
				{
					col+=(arr[i].second.size()-i2);
				}
				i1++;
			}
			else
			{
				if (mp[abs(arr[i].second[i2])]>1)
				{
				//	col++;
					col+=(arr[i].second.size()-1-i2);
				}
				else
				{
					col+=(arr[i].first.size()-i1);
				}
				i2++;		
			}
		}
		
		while (i1<arr[i].first.size())
		{
			if (mp[abs(arr[i].first[i1])]>1)
				{
				//	col++;
					col+=(arr[i].first.size()-1-i1);
				}
			i1++;
		}
		while(i2<arr[i].second.size())
		{
				if (mp[abs(arr[i].second[i2])]>1)
				{
				//	col++;
					col+=(arr[i].second.size()-1-i2);
				}
				i2++;
		}
	}
	
	
	for (auto i=mp.begin();i!=mp.end();i++)
	{
		if (i->second>1)
		col++;
	}
	
	cout<<col<<endl;
	
	
}


int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 solve2();
	}
 return 0;
}

