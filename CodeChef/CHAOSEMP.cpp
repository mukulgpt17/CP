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
  	ll t,q,d;
  	cin>>t,q,d;
  	ll mn=-1*1e18;
  	ll mx=1e18;
  	// cout<<mn<<endl;
  	// cout<<mx<<endl;
  	

  	if (d==0)
  	{
  		while (t--)
  		{

  		ll sx=mn;
  		ll ex=mx;

  		ll sy=mn;
  		ll ey=mx;

  		ll mx;
  		ll my;

  		string s;


  		while (sx<=ex || sy<=ey)
  		{

  			mx=(sx+ex)/2;
  			my=(sy+ey)/2;

  			cout<<1<<" "<<mx<<" "<<my<<endl;
  			cout.flush();
  			
  			cin>>s;
  			if (s=="O")
  			{
  				return ;
  			}


  			if (s[0]=='X')
  			{
  				sx=mx;
  				ex=mx;
  			}
  			else
  			{
  				if (s[0]=='N')
  				{
  					sx=mx+1;
  				}
  				else
  				{
  					ex=mx-1;
  				}
  			}

  			if (s[1]=='Y')
  			{
  				sy=my;
  				ey=my;
  			}
  			else
  			{
  				if (s[1]=='N')
  					{
  						sy=my+1;
  					}
  					else
  					{
  						ey=my-1;
  					}
  			}
  		}

  	}

  	}
  	else
  	{
		while (t--)
		{














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


    int t=1;
    // cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
