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

	if (n%2==0)
	{

		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		vector<int> ve(2*n);	
		int ind=0;

		for (int i=1;i<=2*n;i+=2)
		{
			ve[ind]=i;
			ve[(ind+n)%(2*n)]=i+1;
			ind=(ind+n+1)%(2*n);
			// ind%=2*n;	
		}


		for(int i=0;i<2*n;i++)
		{
			cout<<ve[i]<<" ";
		}
		cout<<endl;
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
