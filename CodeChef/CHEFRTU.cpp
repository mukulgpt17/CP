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
  
  int n;
  cin>>n;

  vector<int> ve(n);
  int od=0;
  int ev=0;
  for(int i=0;i<n;i++)
  {
  	cin>>ve[i];
  	if (ve[i]%2)
  		od++;
  	else
  		ev++;
  }

  int left=0;
  int cr=0;

  for (int i=0;i<n;i++)
  {
  	if (ve[i]%2)
  		{
  			
  			left+=(i-cr);
  			cr++;
  		}
  }



  cr=n-1;
  int right=0;
  for(int i=n-1;i>=0;i--)
  {
  	if(ve[i]%2)
  	{
  		right+=abs(i-cr);
  	}
  }


  cout<<min(left,right)<<endl;

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
