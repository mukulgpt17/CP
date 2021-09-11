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
cin>> n;

vector<ll> ve;
ll te;

for (int i=0;i<n;i++)
{
	cin>>te;
	ve.pb(te);
}

sort(ve.begin(),ve.end());
ll answer=0;

for (int i=0;i<n;i++)
{
	answer+=abs(ve[i]-(i+1));
}

cout<<answer<<endl;

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

