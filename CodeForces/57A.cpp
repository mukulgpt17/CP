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
	
	int n,x1,y1,x2,y2;
	cin>>n>>x1>>y1>>x2>>y2;

	//case 
	if ((x1==0 || x1==n)&& (x2==0 ||x2==n))
		{

			if (x1==x2)
			{
				cout<<abs(y1-y2)<<endl;
				return ;
			}
			else
			{

				int an=min(y1-0+y2-0,n-y1+n-y2);
				an+=n;
				cout<<an<<endl;
				return ;

			}
		}

	if ((y1==0 || y1==n)&& (y2==0 ||y2==n))
		{

			if (y1==y2)
			{
				cout<<abs(x1-x2)<<endl;
				return ;
			}
			else
			{

				int an=min(x1-0+x2-0,n-x1+n-x2);
				an+=n;
				cout<<an<<endl;
				return ;
			}
		}


		if ((x1==0 || x1==n) &&(y2==0 || y2==n) || (y1==0 || y1==n) &&(x2==0 || x2==n))
		{
			int an=abs(x1-x2)+abs(y1-y2);

			cout<<an<<endl;

			return ;
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
