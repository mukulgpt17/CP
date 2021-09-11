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
	string a;
	string b;
	cin>>a;
	cin>>b;
	
	map<char,ll> mpa;
	map<char,ll> mpb;
	for (int i=0;i<a.size();i++)
	{
		if (a[i]!=b[i])
		{
			mpa[a[i]]++;
			//mpb[b[i]]++;
		}
	}
	
	cout<<min(mpa['4'],mpa['7'])+max(mpa['4'],mpa['7'])-min(mpa['4'],mpa['7'])<<endl;


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

