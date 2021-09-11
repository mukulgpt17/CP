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
map<char,int> mp;
ll n;
cin>>n;
	
	for (int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		
		for(int j=0;j<s.size();j++)
		{
			mp[s[j]]++;
		}
	}
	
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		if(i->second%n!=0)
		{
			cout<<"NO"<<endl;
			return ;
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

