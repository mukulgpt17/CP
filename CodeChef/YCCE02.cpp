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


const int N = 10000000;
ll lp[N+1];
ll sumi[N+1];
vector<int> pr;


void solve()
{
  
  int n;
  cin>>n;
  cout<<sumi[n]<<endl;
  return ;



  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);

	
	for (int i=2; i<=N; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	        pr.push_back (i);
	    }
	    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
	        lp[i * pr[j]] = pr[j];
	}

	// for (int i=0;i<=10;i++)
	// 	cout<<lp[i]<<" ";
	// cout<<endl;
	for(int i=2;i<=N;i++)
	{
		if (lp[i]==i)
		{
			sumi[i]=sumi[i-1]+i;
		}
		else
			sumi[i]=sumi[i-1];
	}

    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
