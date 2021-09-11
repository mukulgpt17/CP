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
	int n ; 
	cin>>n;
	
	map<pair<int,int>,pair<int,int>> mp;
	vector<vector<int>> ve;
	
	int index1;
	int val1=INT_MIN;
	for (int i=1;i<=n;i++)
	{
		vector<int> te;
		int a,b,c;
		cin>>a>>b>>c;
		te.pb(a);
		te.pb(b);
		te.pb(c);
		ve.pb(te);
		
		int temp=min(a,b);
		temp=min(temp,c);
		
		if (temp>val1)
		{
			val1=temp;
			index1=i;	
		}	
		//ab
		if (mp.find({a,b})!=mp.end())
		{
			if (c>mp[{a,b}].second)
			{
				mp[{a,b}]={i,c};
			}
		}
		else
		{
			mp[{a,b}]={i,c};
		}
		
		//ba
		if (mp.find({b,a})!=mp.end())
		{
			if (c>mp[{b,a}].second)
			{
				mp[{b,a}]={i,c};
			}
		
		}
		else
		{
			mp[{b,a}]={i,c};
		}
		
		//ca
		if (mp.find({c,a})!=mp.end())
		{
			if (b>mp[{c,a}].second)
			{
				mp[{c,a}]={i,b};
			}
		}
		else
		{
			mp[{c,a}]={i,b};
		}
		
		//ac
		if (mp.find({a,c})!=mp.end())
		{
			if (b>mp[{a,c}].second)
			{
				mp[{a,c}]={i,b};
			}
		}
		else
		{
			mp[{a,c}]={i,b};
		}
		
		//cb
		if (mp.find({c,b})!=mp.end())
		{
			if (a>mp[{c,b}].second)
			{
				mp[{c,b}]={i,a};
			}
		}
		else
		{
			mp[{c,b}]={i,a};
		}
		
		//bc
		if (mp.find({b,c})!=mp.end())
		{
			if (a>mp[{b,c}].second)
			{
				mp[{b,c}]={i,a};
			}
		}
		else
		{
			mp[{b,c}]={i,a};
		}
		
//		mp[{b,a}].pb({i,c});
//		mp[{a,c}].pb({i,b});
//		mp[{c,a}].pb({i,b});
//		mp[{c,b}].pb({i,a});
//		mp[{b,c}].pb({i,a});
		
	}
	
	int index2a;
	int index2b;
	int val2 =INT_MIN;
	
	for (int j=1;j<=n;j++)
	{
		
		int a,b,c;
		a=ve[j-1][0];
		b=ve[j-1][1];
		c=ve[j-1][2];
		
		int te=INT_MIN;
		int ind=-1;
		if (mp.find({a,b})!=mp.end())
		{	
//			for(int i=0;i<mp[{a,b}].size();i++)
			{	
				if ( mp[{a,b}].first!=j)
				{
			
				if (min(min(a,b),c+mp[{a,b}].second) >te)
				{
					te=min(min(a,b),c+mp[{a,b}].second);
					ind=mp[{a,b}].first;
				}
				}
			}
			
		}
//		if (mp.find({b,a})!=mp.end())
//		{
//			for(int i=0;i<mp[{b,a}].size();i++)
//			{	if (mp[{b,a}][i].first!=j)
//				{
//				
//				if (min(min(b,a),c+mp[{b,a}][i].second) >te)
//				{
//					te=min(min(b,a),c+mp[{b,a}][i].second);
//					ind=mp[{b,a}][i].first;
//				}
//				
//				}
//			}
//			
//		}
		if (mp.find({a,c})!=mp.end())
		{
			
		//	for(int i=0;i<mp[{a,c}].size();i++)
			{if (mp.find({a,c})!=mp.end() && mp[{a,c}].first!=j)
			{
			
				if (min(min(a,c),b+mp[{a,c}].second) >te)
				{
					te=min(min(a,c),b+mp[{a,c}].second);
					ind=mp[{a,c}].first;
				}
			
			
			}}
		
		}	
//		if (mp.find({c,a})!=mp.end())
//		{
//			for(int i=0;i<mp[{c,a}].size();i++)
//			{	if(mp[{c,a}][i].first!=j)
//				{
//				
//				if (min(min(c,a),b+mp[{c,a}][i].second) >te)
//				{
//					te=min(min(c,a),b+mp[{c,a}][i].second);
//					ind=mp[{c,a}][i].first;
//				}
//				}
//			}
//			
//		}		
		if (mp.find({b,c})!=mp.end())
		{
		//	for(int i=0;i<mp[{b,c}].size();i++)
			{	if(mp[{b,c}].first!=j)
			{
				
				if (min(min(b,c),a+mp[{b,c}].second) >te)
				{
					te=min(min(b,c),a+mp[{b,c}].second);
					ind=mp[{b,c}].first;
				}
			}}
			
		}
//		if (mp.find({c,b})!=mp.end())
//		{
//			for(int i=0;i<mp[{c,b}].size();i++)
//			{
//				if (mp[{c,b}][i].first!=j)
//				{
//				
//				if (min(min(c,b),a+mp[{c,b}][i].second) >te)
//				{
//					te=min(min(c,b),a+mp[{c,b}][i].second);
//					ind=mp[{c,b}][i].first;
//				}
//				
//				}
//			}
//			
//		}
		
		if(ind!=-1)
		{
			if (te>val2)
			{
				index2a=j;
				index2b=ind;
				val2=te;
			}
			
		}
				
	}
//	cout<<val1<<endl;
//	cout<<val2<<endl;

	if (val1>val2)
	{	cout<<1<<endl;
		cout<<index1<<endl;
	}
	else
	{	cout<<2<<endl;
		cout<<index2a<<" "<<index2b<<endl;
	}
}

int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

