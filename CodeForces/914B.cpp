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
ll n ;
cin>>n;
map<ll,ll,greater<int>> mp;
ll tm;
for (int i=0;i<n;i++)
{
	cin>>tm;
	mp[tm]++;
}
for (auto i=mp.begin();i!=mp.end();i++)
{
	if (i->second%2!=0)
	{
		cout<<"Conan"<<endl;
		return ;
	}
}
cout<<"Agasa"<<endl;
return ;

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

