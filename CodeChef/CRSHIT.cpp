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
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

void solve()
{
  
  ll n,q,k;
  cin>>n>>q>>k;


  vector<ll> A;
  vector<ll> B;

  ll d,v;
  for (ll i=0;i<n;i++)
  {
  	cin>>d>>v;

  	if (d==1)
  		A.pb(v);
  	else
  		B.pb(v);
  }


  sort(A.begin(),A.end());
  sort(B.begin(),B.end());

  int te=B.size();

  for (int i=0;i<te;i++)
  	B.push_back(B[i]+k);

  while (q--)
  {

  	ll t;
  	cin>>t;

  	t=t*2;

  	ll quo=t/k;
  	ll rem=t%k;

  	// cout<<quo<<" "<<rem<<endl;
  	ll tot=(quo*(A.size())*(B.size())/2);

  	
  	ll l=0;
  	ll r=0;

  	for (int i=0;i<A.size();i++)
  	{
  		while (l<B.size() && B[l]<A[i])
  			l++;

  		while (r<B.size() && B[r]<=A[i]+rem)
  			r++;
  		
  		// cout<</r-l<<endl;
  		tot+=r-l;
  	}


  	cout<<tot<<endl;
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
