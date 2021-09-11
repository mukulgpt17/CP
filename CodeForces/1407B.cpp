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

  vector<int> vec(n);

  for (int i=0;i<n;i++)
  {
  	cin>>vec[i];
}
vector<int> an;
  sort(vec.begin(),vec.end(),greater<int> ());
  int curr=vec[0];
  
  for(int i=1;i<n;i++)
  {
  	int temp=__gcd(curr,vec[i]);
  	int ind=i;
  	for (int j=i;j<n;j++)
  	{
  		if(__gcd(curr,vec[j])>temp)
  		{
  			ind=j;
  			temp=__gcd(curr,vec[j]);
  		}
  	}

  	swap(vec[i],vec[ind]);
  	curr=__gcd(curr,vec[i]);
  }

  for (auto i: vec)
  {
  	cout<<i<<" ";
  }
  cout<<endl;

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
