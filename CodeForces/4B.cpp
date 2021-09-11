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

void solve()
{

	int d,s;
	cin>>d>>s;

	vector<pair<int,int>>  ve(d);
	int a,b;
	int mx=0;
	int mn=0;
	for (int i=0;i<d;i++)
	{
		cin>>a>>b;
		ve[i]={a,b};
		mx+=b;
		mn+=a;
	}

	if (mx>=s && mn<=s)
	{
		cout<<"YES"<<endl;
		s-=mn;

		for (int i=0;i<d;i++)
		{
			if(s>0)
			{
				if (s>=abs(ve[i].first-ve[i].second))
				{	s-=abs(ve[i].first-ve[i].second);
					ve[i].first+=abs(ve[i].first-ve[i].second);
				}
				else
				{
					ve[i].first+=s;
					s=0;
				}
			}
			else
			{
				break;
			}
		}

		for (int i=0;i<d;i++)
			cout<<ve[i].first<<" ";
		cout<<endl;

	}
	else
	{
		cout<<"NO"<<endl;
	}

  
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
