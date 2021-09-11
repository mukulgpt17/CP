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
  
	string s;
	cin>>s;

	ll lo=0;
	ll up=0;
	ll dig=0;

	for (int i=0;i<s.size();i++)
	{
		if (s[i]-'a'>=0 && s[i]-'a'<26)
		{
			lo+=1;
		}
		else if (s[i]-'A'>=0 && s[i]-'A'<26)
		{
			up+=1;
		}
		else
		{
			dig+=1;
		}
	}

	if (lo!=0 && up!=0 && dig!=0)
	{
		cout<<s<<endl;
		return ;
	}
	else
	{
		// only 1 0 
		if ((lo!=0 && up!=0 )|| (lo!=0 && dig!=0 ) || (up!=0 && dig!=0 ))
		{
			if (lo==0)


		}
		else
		{
			if(lo==0 && up==0)
			{

			}
			else if(lo==0 && dig==0)
			{

			}
			else
			{

			}
		}

	}
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
