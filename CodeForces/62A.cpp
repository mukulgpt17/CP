#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

int  solve1(int g,int b)
{
	if (g==b)
	{
		// cout<<"YES"<<endl;
		return 0;
	}
	else if (g>b)
	{

		if (g-b>=2)
		{
			// cout<<"NO"<<endl;
			return 1;
		}
		else
				return 0;// cout			ut<<"YES"<<endl;
	}
	else
	{
		int d=b-2*g;

		if (d>=3)
		{
			
			return 1;// cout<<"NO"<<endl;
		}
		else
		{
			
			return 0;// cout<<"YES"<<endl; r
					}
	}



}




void solve()
{
int gl,gr;
int bl,br;
cin>>gl>>gr;
cin>>bl>>br;

// left hand 

int v=solve1(gl,br);
if (v==0)
{
	cout<<"YES"<<endl;
	return ;
}

v=solve1(gr,bl);
if (v==0)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
}

main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t=1;
    // cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
