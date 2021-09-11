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

  vector<ll> vec(n-1);
  ll curr;
  cin>>curr;
  ll tt;
  priority_queue<ll> gq;
 for (int i=1;i<n;i++)
 {
 	cin>>tt;
 	gq.push(tt);
 }

 ll count=0;
 while (curr<=gq.top())
 {
 	curr++;
 	count++;
 	ll x=gq.top();
 	gq.pop();
 	gq.push(x-1);
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


    int t=1;
    // cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
