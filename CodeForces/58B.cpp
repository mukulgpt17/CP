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

	if (n==1)
	{
		cout<<1<<endl;
		return ;
	}

	vector<int> ve;
	ve.pb(1);

	for(int i=2;i*i<=n;i++)
	{
		if (n%i==0)
		{
			ve.pb(i);
			if (i != n/i)
			ve.pb(n/i);
		}
	}

	ve.pb(n);
	sort(ve.begin(),ve.end());

	vector<int> an;
	int prev=1;
	an.pb(1);

	for (int i=1;i<ve.size();i++)
	{
		if (ve[i]%prev==0)
		{
			an.pb(ve[i]);
			prev=ve[i];
		}
	}


	reverse(an.begin(),an.end());

	for (int i=0;i<an.size();i++)
		cout<<an[i]<<" ";
	cout<<endl;




  
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
