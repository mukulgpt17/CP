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
  ll e,s,w,n;
  ll t,sx,sy,ex,ey;

  cin>>t>>sx>>sy>>ex>>ey;
  string ss;
  cin>>ss;
  for(int i=0;i<ss.size();i++)
  {
  	if (ss[i]=='S') s++;
  	if (ss[i]=='E') e++;
	if (ss[i]=='W') w++;
	if (ss[i]=='N') n++;
  }

  ll dx=ex-sx;
  ll dy=ey-sy;
  ll tt=0;
  for(int i=0;i<ss.size();i++)
  {	
  	if (dx==0 && dy==0)
  	{
  		cout<<i<<endl;
  		return ;
  	}
  	if (ss[i]=='S')
  	{
  		if (dy<0)
  		{
  			dy++;
  		}

  	}
	if (ss[i]=='N')
  	{
  		if(dy>0)
  			dy--;

  	}
  	if (ss[i]=='E')
  	{
  		if(dx>0) dx--;
  	}
  	if (ss[i]=='W')
  	{
  		if (dx<0) dx++;
  	}

  }
  if(dx==0 && dy==0)
  	cout<<ss.size()<<endl;
  else
  cout<<-1<<endl;

  
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
