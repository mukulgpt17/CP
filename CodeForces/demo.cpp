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
    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll> A(n);
    vector<ll> B(m);

    FOR(i,n)cin>>A[i];
    FOR(i,m)cin>>B[i];  

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());


    int ct=0;
    int i=0;
    int j=0;
    // cout<<"check1"<<endl;
    while(i<n && j<m)
    {
        // cout<<i<<" "<<j<<endl;
        if (B[j]<A[i] && B[j]<A[i]-k)
        {
            j++;
        }
        else if (B[j]<=A[i] && B[j]>=A[i]-k)
        {
            ct++;
            i++;
            j++;
        }
        else if (B[j]>A[i] && B[j]<=A[i]+k)
        {
            ct++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }

    cout<<ct<<endl;



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
    // cout<<"chcek1"<<endl;
    while (t--)
    {
        solve();
    }
return 0;
}
