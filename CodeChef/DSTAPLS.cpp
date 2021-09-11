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
  void solve()
 {
   
 	ll n;
 	ll k;
 	cin>>n>>k;
 	
 	n=n/k;
 	if (k==1 || n%k==0)
 	{
 		cout<<"NO"<<endl;
 	}
 	else
 	{
 		cout<<"YES"<<endl;
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
 