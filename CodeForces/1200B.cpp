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

	vector<ll> ve(n);

	for (int i=0;i<n;i++)
		cin>>ve[i];

	for (int i=0;i<n-1;i++)
	{

		if(ve[i]>=ve[i+1])
		{
			// always possible 

			m+=ve[i]-ve[i+1];
			ve[i]-=ve[i]-ve[i+1];

			m+=min(k,ve[i]);
			ve[i]-=min(k,ve[i]);
		}
		else
		{

			if (abs(ve[i]-ve[i+1])<=k)
			{
				//poss 

				m+=min(ve[i],k-abs(ve[i]-ve[i+1]));
				ve[i]-=min(ve[i],k-abs(ve[i]-ve[i+1]));

			}
			else
			{
				if (ve[i]+m>=ve[i+1] || abs(ve[i]+m-ve[i+1])<=k)
				{
					// possible 
					int d=ve[i+1]-ve[i];
					// d>=k;
					m-=(d-k);
					ve[i]+=(d-k);
				}
				else
				{
					/// not possible 

					cout<<"NO"<<endl;
					return ;


				}
			}

		}
	}

	cout<<"YES"<<endl;
  
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
