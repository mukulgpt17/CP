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
	string s;
	cin>>s;
	
	set<pair<int,int>> mp;
	
	ll x=0;
	ll y=0;
	
	for (int i=0;i<s.size();i++)
	{
		if (s[i]=='L')
		{
			x--;
			mp.insert({x,y});
		}
		else if (s[i]=='U')
		{
			y++;
			mp.insert({x,y});
			
		}
		else if (s[i]=='D')
		{	
			y--;
			mp.insert({x,y});
		}
		else if (s[i]=='R')
		{
			x++;
			mp.insert({x,y});
		}
	}
	
	pair<int,int> obs;
	for (auto i=mp.begin();i!=mp.end();i++)
	{
			obs.first=i->first;
			obs.second=i->second;
//			cout<<obs.first<<" "<<obs.second<<" ";
			x=0;y=0;
//			cout<<x<<" "<<y<<" ";
			for (int j=0;j<s.size();j++)
			{
				if (s[j]=='L')
				{
					if ((x-1)==obs.first && (y==obs.second))
					{
						continue;
					}
					else
					{
						x--;
					}
				}
				else if (s[j]=='R')
				{
					if ((x+1)==obs.first && (y==obs.second))
					{
						continue;
					}
					else
					{
						x++;
					}
				}
				else if (s[j]=='U')
				{
					if ((x)==obs.first && (y+1==obs.second))
					{
						continue;
					}
					else
					{
						y++;
					}
				
				}
				else if (s[j]=='D')
				{
					if ((x)==obs.first && (y-1==obs.second))
					{
						continue;
					}
					else
					{
						y--;
					}
				}
								
			}
//			cout<<x<<" "<<y<<endl;
			if (x==0 && y==0)
			{
				cout<<obs.first<<" "<<obs.second<<endl;
				return ;
			}
	}
	cout<<0<<" "<<0<<endl;
	return ;
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

