#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef unsigned long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;

    vector<long long> A(a);

    vector<long long> B(b);

    vector<long long > C(c);


    for (int i=0;i<a;i++)cin>>A[i];


    for (int i=0;i<b;i++)cin>>B[i];
    

    for (int i=0;i<c;i++)cin>>C[i];


    sort(A.begin(),A.end());    
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());


    ll ans=ULLONG_MAX;

    for(int i=0;i<a;i++)
    {
        // b r g 

        ll bl=upper_bound(B.begin(),B.end(),A[i])-B.begin();
        bl--;
        // cout<<bl<<e\ndl;
        ll gr=lower_bound(C.begin(),C.end(),A[i])-C.begin();
        // cout<<gr<<endl;
        if(gr<C.size() && bl>=0)
        {

            ll temp=(A[i]-B[bl])*(A[i]-B[bl])+(C[gr]-A[i])*(C[gr]-A[i])+(C[gr]-B[bl])*(C[gr]-B[bl]);
            ans=min(ans,temp);
        }


        // g r b

         gr=upper_bound(C.begin(),C.end(),A[i])-C.begin();
         gr--;

         bl=lower_bound(B.begin(),B.end(),A[i])-B.begin();


        if(bl<B.size() && gr>=0)
        {

            ll temp=(B[bl]-A[i])*(B[bl]-A[i])+(A[i]-C[gr])*(A[i]-C[gr])+(B[bl]-C[gr])*(B[bl]-B[bl]);
            ans=min(ans,temp);
        }
    }

    for(int i=0;i<b;i++)
    {
        // r b g

        ll bl=upper_bound(A.begin(),A.end(),B[i])-A.begin();
        bl--;
        ll gr=lower_bound(C.begin(),C.end(),B[i])-C.begin();

        if(gr<C.size() && bl>=0)
        {

            ll temp=(B[i]-A[bl])*(B[i]-A[bl])+(C[gr]-B[i])*(C[gr]-B[i])+(C[gr]-A[bl])*(C[gr]-A[bl]);
            ans=min(ans,temp);
        }
        
        // g b r
        gr=upper_bound(C.begin(),C.end(),B[i])-C.begin();
        gr--;

        bl=lower_bound(A.begin(),A.end(),B[i])-A.begin();

        if (bl<A.size() && gr>=0)
        {
            ll temp=(A[bl]-B[i])*(A[bl]-B[i])+(B[i]-C[gr])*(B[i]-C[gr])+(A[bl]-C[gr])*(A[bl]-C[gr]);
            ans=min(ans,temp);
        }

    }


    for(int i=0;i<c;i++)
    {
        // r g b

        ll bl=upper_bound(A.begin(),A.end(),C[i])-A.begin();
            bl--;
        ll gr=lower_bound(B.begin(),B.end(),C[i])-B.begin();

        if(gr<B.size() && bl>=0)
        {

            ll temp=(C[i]-A[bl])*(C[i]-A[bl])+(B[gr]-C[i])*(B[gr]-C[i])+(B[gr]-A[bl])*(B[gr]-A[bl]);
            ans=min(ans,temp);
        }
        
        // g b r

        gr=upper_bound(B.begin(),B.end(),C[i])-C.begin();
        gr--;

        bl=lower_bound(A.begin(),A.end(),C[i])-A.begin();

        if (bl<A.size() && gr>=0)
        {
            
            ll temp=(A[bl]-C[i])*(A[bl]-C[i])+(C[i]-B[gr])*(C[i]-B[gr])+(A[bl]-B[gr])*(A[bl]-B[gr]);
            ans=min(ans,temp);
        }

    }

    cout<<ans<<endl;
    
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
    // cout<<"check";
    while (t--)
    {
        solve();
    }
return 0;
}
