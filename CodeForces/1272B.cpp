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

  ll u=0;
  ll r=0;
  ll d=0;
  ll l=0;

  for (ll i=0;i<s.size();i++)
  {
  	if (s[i]=='U') u++;
  	if (s[i]=='D') d++;
  	if (s[i]=='L') l++;
  	if (s[i]=='R') r++;
  }
  


  if(min(u,d)==0 && min(l,r)==0)
  {
  	cout<<0<<endl;
  	cout<<""<<endl;
  }
  else if (min(u,d)==0 )
  {
  	cout<<2<<endl;
  	cout<<"LR"<<endl;

  }
  else if(min(l,r)==0)
  {
  	cout<<2<<endl;
  	cout<<"UD"<<endl;
  }
  else 
  {
  	ll tt=2*(min(u,d)+min(l,r));
  	cout<<tt<<endl;
  	for (int i=0;i<min(l,r);i++)
  	{
  		cout<<"L";
  	}
  	for (int i=0;i<min(u,d);i++)
  	{
  		cout<<"U";
  	}
  	for (int i=0;i<min(l,r);i++)
  	{
  		cout<<"R";
  	}
  	for (int i=0;i<min(u,d);i++)
  	{
  		cout<<"D";
  	}
  	cout<<endl;

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
