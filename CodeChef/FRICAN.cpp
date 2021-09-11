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

int n,m;
cin>>n>>m;

vector<int> ve(n);
vector<int> lf(n);
vector<int> rf(n);
for(int i=0;i<n;i++)
{
	cin>>ve[i];
}  


lf[0]=ve[0];

for(int i=1;i<n;i++)
{
	lf[i]=lf[i-1]+ve[i];
}

rf[0]=ve[n-1];
for (int i=1;i<n;i++)
{
	rf[i]=rf[i-1]+ve[n-1-i];
}


int a,b;
int an=0;
for(int i=0;i<m;i++)
{
	cin>>a>>b;
	if (lf[a])
	if (lf[a-1]>=rf(b-1)	)
	{


	}
	else
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


    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
