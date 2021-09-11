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
	string s;
	cin>>s;
	string a="";
	for (int i=0;i<s.size();i++)
	{
		if (s[i]-'0'<='9'-s[i])
		{
			a+=s[i];
		}
		else
		{
			a+=to_string('9'-s[i]);
		}
	}
	
	string ans="";
	int i=0;
	while (a[i]=='0')
	{	if (i==0)
		ans+='9';
		else
		ans+='0';
		i++;
	}
	while (i<a.size())
	{
		ans+=a[i];
		i++;		
	}
	if (ans!="")
	cout<<ans<<endl;
	else
	cout<<s<<endl;
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

