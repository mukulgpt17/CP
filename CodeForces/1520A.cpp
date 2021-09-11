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
	
	string s;
	cin>>s;
	
	char curr;
	set<char> ss;
	
	for (int i=0;i<s.size();i++)
	{
		if (i==0)
		{
			curr=s[i];
			ss.insert(s[i]);
		}
		else
		{
			if (s[i]!=curr)
			{
				if (ss.find(s[i])!=ss.end())
				{
					cout<<"NO"<<endl;
					return ;
				}
				else
				{
					ss.insert(s[i]);
					curr=s[i];
				}
			}
		}
	}

	cout<<"YES"<<endl;
	
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

