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

bool cmp(pair<int,int> a, pair<int,int> b)
{
	if (a.first>b.first)
	{
		return true;
	}
	else if (a.first<b.first)
	{
		return false;
	}
	else
	{
		return a.second<b.second;
	}


}

void solve()
{
  ll n,k;
  cin>>n>>k;

 vector<pair<int,int>> ve(n);
 int t;
 for(int i=0;i<n;i++)
 {
 	cin>>t;
 	ve[i]={t,i};
 }

 sort(ve.begin(),ve.end(),cmp);

 ll an=0;
 vector<int> ind(k);
 for (int i=0;i<k;i++)
 {
 	an+=ve[i].first;
 	ind[i]=ve[i].second;
 }

if(k==1)
{
	cout<<an<<endl;
	cout<<n<<endl;
	return ;
}
sort(ind.begin(),ind.end());

cout<<an<<endl;
cout<<ind[0]+1<<" ";
for (int i=1;i<k-1;i++)
{
	cout<<ind[i]-ind[i-1]<<" ";
}

cout<<n-1-ind[k-2]<<endl;

  
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
