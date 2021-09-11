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

  ll n,k;
  cin>>n>>k;

  ll  i=n-2*k-1;
  if (i<=0)
    i=1;
  ll  j=1;

  ll  ve[n+1];

  for (ll  p=1;p<=n;p++){
    cin>>ve[p];
  }

  ll   maxi=INT_MIN;

  for (ll  id=i;id<=n;id++)
  {
    for (ll  jd=1;jd<=n;jd++)
    {
       if (id!=jd)
       maxi=max(maxi,id*jd-k*(ve[id]|ve[jd]));
    }
  }

  cout<<maxi<<endl;

}


main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    ll  t;
    cin>>t;

    while (t--)
    {
      solve();
    }
return 0;
}

