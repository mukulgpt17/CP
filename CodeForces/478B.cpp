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
#define ull unsigned long long int 
ull fact(int n)
{
  	ull te=1ull*n*(n-1);
  	te/=2;
  	return te;
}

void solve()
{
  
 	ull n,k;

 	cin>>n>>k;

 	ull x=n/k;
 	ull y=n%k;

 	ull te=(k-y);
 	// cout<<x<<y<<endl;
 	ull mn=0;

 	ull temp=fact(x)*te;
 	// cout<<temp<<endl;
 	mn+=(temp);
 	// if (y)
 	mn+=(fact(x+1)*y);


	cout<<mn<<" ";

	ull mx=0;

	mx=(fact(k-n));
	cout<<mx<<endl;


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
    // ull temp=pow(2,63)-1;
    // cout<<temp<<endl;
    while (t--)
    {
    	solve();
    }
return 0;
}
