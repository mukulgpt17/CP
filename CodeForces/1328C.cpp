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
  
  ll n;
  cin>>n;

  string s;
  cin>>s;

  string s1="";
  string s2="";

  ll flag=0;

  for (int i=0;i<n;i++)
  {
  	if (s[i]=='2' )
  	{
  		if (flag==0)
  		{
  			s1+='1';
  			s2+='1';
  		}
  		else
  		{
  			s1+='0';
  			s2+='2';
  		}
  	}
  	else if (s[i]=='1')
  	{
  		if (flag==0)
  		{
  			s1+='1';
  			s2+='0';
  			flag=1;
  		}
  		else
  		{
  			s1+='0';
  			s2+='1';
  		}
  	}
  	else
  	{
  		s1+='0';
  		s2+='0';
  	}
  }
  cout<<s1<<endl;
  cout<<s2<<endl;
  
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
