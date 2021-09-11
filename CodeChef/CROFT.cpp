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

bool cmp(pair<ll,ll> a,pair<ll,ll> b)
{

	return (a.first+a.second>b.first+b.second);

}

void solve()
{
  
  ll n;
  cin>>n;

  vector<ll> A(n);
  vector<ll> B(n);
  vector<pair<ll,ll> > ve(n);


  for (int i=0;i<n;i++)
 	{
 		cin>>A[i];
 	}
 	ll bsum=0;
 	for (int i=0;i<n;i++)
 	{
 		cin>>B[i];bsum+=B[i];
 		ve[i]={A[i],B[i]};
 	}

 	
 	sort(ve.begin(),ve.end(),cmp);

	ll summ1=0;
	ll summ2=0;

	ll flag=1; 	

	for (int i=0;i<n;i++)
	{
		if (flag)
		{
			summ1+=ve[i].first;
		}
		else
		{
			summ2+=ve[i].second;
		}

		flag^=1;
	}

 	if (summ1>summ2)
 	{
 		cout<<"First"<<endl;
 	}
 	else if (summ1==summ2)
 	{
 		cout<<"Tie"<<endl;
 	}
 	else
 	{
 		cout<<"Second"<<endl;
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
