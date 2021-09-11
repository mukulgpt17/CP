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
	
	ll R,P,S;
	cin>>R>>P>>S;
	
	map<char,ll> mp;
	string s;
	cin>>s;
	for (int i=0;i<n;i++)
	{
		mp[s[i]]++;
	}
	
	
	ll count=0;
	count+=min(R,mp['S']);
	count+=min(P,mp['R']);
	count+=min(S,mp['P']);
	
	if (count>=(n+1)/2)
	{
	cout<<"YES"<<endl;
	string ans="";
	for (int i=0;i<n;i++)
	{
		if(s[i]=='P')
		{
			if (S>0)
			{
				ans+='S';
				S--;
			}
			else
			{
				ans+='-';
			}
			
		}
		else if(s[i]=='R')
		{
			if (P>0)
			{
				ans+='P';
				
				P--;
			}
			else
			{
				ans+='-';
			}
			
			
		
		}
		else if (s[i]=='S')
		{
			if (R>0)
			{
				ans+='R';
				R--;
			}
			else
			{
				ans+='-';
			}
			
		}
		
	}
	string ss=ans;
//	cout<<ss.size()<<endl;

	for (int i=0;i<ss.size();i++)
	{
		if (ss[i]=='-')
		{
			if (P>0)
			{
				ss[i]='P';
				P--;
			}
			else if (R>0)
			{
				ss[i]='R';
				R--;
			}
			else if (S>0)
			{
				ss[i]='S';
				S--;
			}
		}
	}
	cout<<ss<<endl;
	
	
}
	else
	cout<<"NO"<<endl;
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

