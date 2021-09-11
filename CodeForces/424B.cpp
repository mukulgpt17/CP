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

bool cmp(pair<pair<ll,ll>,ll> a,pair<pair<ll,ll>,ll> b)
{

	double d1=sqrt(pow(abs(a.first.first),2)+pow(abs(a.first.second),2));
	double d2=sqrt(pow(abs(b.first.first),2)+pow(abs(b.first.second),2));


	if (d1!=d2)
	{
		return d1<d2;
	}
	else
	{
		return a.second>b.second;
	}

}

void solve()
{
  
ll n,p;
cin>>n>>p;

ll req=999998+2 -p;
// cout<<req<<endl;
vector<pair<pair<ll,ll>,ll>> pop;

for (int i=0;i<n;i++)
{
	ll a,b,c;
	cin>>a>>b>>c;

	pop.pb({{a,b},c});
}

sort(pop.begin(),pop.end(),cmp);
double rad;
ll ind=0;
while (req>0 && ind<n) 
{	
	req-=pop[ind].second;
	rad=sqrt(pow(abs(pop[ind].first.first),2)+pow(abs(pop[ind].first.second),2));
	ind++;
}
if (req>0)
{
	cout<<-1<<endl;
}
else
{
 cout<< fixed << setprecision(7)<<rad<<endl;

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
