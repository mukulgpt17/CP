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

bool cmp(pair<int,int> a,pair<int,int> b)
{

	return ((a.first-a.second)<=(b.first-b.second));

}
// int arr[200000 ];
void solve()
{
	int n,k;
	cin>>n>>k;
	int cost=0;
	vector<int> tea(n);
	vector<int> teb(n);
	vector<pair<int,int>> ve(n);
	// ll a,b;
	for (int i=0;i<n;i++)
		cin>>tea[i];

	for (int i=0;i<n;i++)
		cin>>teb[i];


	for(int i=0;i<n;i++)
	{
		// cin>>a>>b;
		ve[i]={tea[i],teb[i]};
	}  

	sort(ve.begin(),ve.end(),cmp);

	// for (int i=0;i<n;i++)
	// {
	// 	cout<<ve[i].first<<" ";
	// }
	// cout<<endl;

	for(int i=0;i<k;i++)
	{
		cost+=ve[i].first;
	}

	while (k<n)
	{
		if (ve[k].first<=ve[k].second)
		{
			cost+=ve[k].first;
			k++;
		}
		else
		{
			break;
		}
	}

	for (int i=k;i<n;i++)
		cost+=ve[i].second;

	cout<<cost<<endl;
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
    	// cout<<"done"<<endl;
    }
return 0;
}
