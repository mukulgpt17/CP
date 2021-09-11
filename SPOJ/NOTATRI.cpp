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

void solve(ll si)
{
  ll n=si;
  // cin>>n;

  vector<ll> ve(n);

  for (int i=0;i<n;i++)
  	cin>>ve[i];

  sort(ve.begin(),ve.end());

  ll count=0;
  for(int i=0;i<n;i++)
  {
  	for(int j=i+1;j<n;j++)
  	{

  		auto ptr=upper_bound(ve.begin()+j+1,ve.end(),ve[i]+ve[j]);

  		count+=ve.end()-ptr;
  	}	
  }


  cout<<count<<endl;
  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


   while (true)
   {
   	ll n;
   	cin>>n;

   	if (n!=0)
   		solve(n);
   	else
   		break;
   }


return 0;
}
