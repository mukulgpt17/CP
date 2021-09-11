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

bool cmp(pair<double,int> a,pair<double,int> b)
{

	if (a.first==b.first)
	{
		return a.second>b.second;
	}
	else
	{
		return a.first<b.first;
	}


}

void solve()
{
  ll n,t1,t2,per;
  cin>>n>>t1>>t2>>per;



  vector<pair<ll,ll>> ve;
  int a,b;
  for (int i=0;i<n;i++)
  {
  	cin>>a>>b;
  	ve.pb({a,b});
  }

  vector<pair<double,int>> ans;
 
  for (int i=0;i<n;i++)
  {
  	//cout<<(double)per/100.0<<endl;
  	double temp1=(double)ve[i].first*t1*((double)(100-per)/100.0)+(double)ve[i].second*t2;
  	double temp2=(double)ve[i].second*t1*((double)(100-per)/100.0)+(double)ve[i].first*t2;
  	// cout<<temp1<<" "<<temp2<<endl;
  	if (temp1<=temp2)
  	{
  		ans.pb({temp2,i+1});

  	}
  	else{
  	//	temp1=ceil(temp1*100.0)/100.0;
  		ans.pb({temp1,i+1});
  	}
  }

  sort(ans.begin(),ans.end(),cmp) ;
  reverse(ans.begin(),ans.end());

  for (auto i=ans.begin();i!=ans.end();i++)
  {
  	printf("%d %.2f \n", i->second,i->first);
  //	cout<<endl;
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
