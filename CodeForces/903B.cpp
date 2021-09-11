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
	ll h1,a1,p1;
	ll h2,a2;
	
	cin>>h1>>a1>>p1;
	cin>>h2>>a2;
	
	vector<string> ve;
	
	while (h2>0)
	{
		if (h1-a2>0 || h2-a1<=0)
		{
			h2-=a1;
			h1-=a2;
			ve.pb("STRIKE");
		}
		else
		{
			h1+=p1;
			ve.pb("HEAL");
			h1-=a2;
		}
	}

	cout<<ve.size()<<endl;
	for (int i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<endl;
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

