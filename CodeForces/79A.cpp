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
  ll x,y;
  cin>>x>>y;

  ll flag=1;
  // flag=1 ceil 0 hanako

  while(100*x+10*y>=220)
  {
  	if (flag==1)
  	{
  		if (x>=2 && y>=2)
  		{
  			x--;
  			x--;
  			y--;
  			y--;
  		}
  		else if (x==1 && y>=12)
  		{
  			x--;
  			y-=12;
  		}
  		else if (y>=22) 
  		{
  			y-=22;
  		}
  		else
  		{
  			cout<<"Hanako"<<endl;
  			return;
  		}
  		flag^=1;
  	}
  	else
  	{
  		if (y>=22)
  		{
  			y-=22;
  		}
  		else if (y>=12 && x>=1)
  		{	
  			y-=12;
  			x--;
  		}
  		else if(y>=2 && x>=2)
  		{
  			y--;
  			y--;
  			x--;
  			x--;
  		}
  		else
  		{
  			cout<<"Ciel"<<endl;
  			return ;
  		}
  		flag^=1;
  	}
  }	

  if (flag==1)
  {
  	cout<<"Hanako"<<endl;
  }
  else
  {
  	cout<<"Ciel"<<endl;
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
