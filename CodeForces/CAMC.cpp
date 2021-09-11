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
  
	int n,m;
	cin>>n>>m;

	vector<vector<int>> ve(m);

	FOR(i,n)
	{
		int temp;
		cin>>temp;

		ve[i%m].push_back(temp);
	}


	// FOR(i,m)
	// {
	// 	FOR(j,ve[i].size())
	// 	cout<<ve[i][j]<<" ";
	// 	cout<<endl;
	// }

	FOR(i,m)
	{
		sort(ve[i].begin(),ve[i].end());
	}
	vector<int> ptr(m,0);
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > gq;
	int mx=INT_MIN;
	for (int i=0;i<m;i++)
	{
		gq.push({ve[i][0],i});
		mx=max(mx,ve[i][0]);
	}
	int ans=INT_MAX;

	while(gq.empty()!=true)
	{	

		pair<int,int> mn=gq.top();
		gq.pop();
		// cout<<mn.first<<endl;
		ans=min(ans,abs(mn.first-mx));

		if (ptr[mn.second]==ve[mn.second].size()-1)
		{
			break;
		}
		else
		{
			ptr[mn.second]++;
			mx=max(mx,ve[mn.second][ptr[mn.second]]);
			gq.push({ve[mn.second][ptr[mn.second]],mn.second});
		}
	}


	cout<<ans<<endl;
  
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
