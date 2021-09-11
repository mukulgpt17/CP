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
  
	ll n;
	cin>>n;

	vector<ll> ve(n);
priority_queue<pair<ll, ll> > g;
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
		if (i!=0)
		g.push({ve[i],i+1});
	}


	 
	 
	 queue<pair<ll,ll>> q;
	 q.push({ve[0],1});

	 vector<pair<ll,ll>> ans;

	 // cout<<g.size()<<endl;

	 while (q.empty()!=true)
	 {
	 	pair<ll,ll> tt=q.front();
	 	q.pop();

	 	ll id=tt.second;
	 	ll val=tt.first;

	 	while (val!=0)
	 	{
	 		if (g.empty()!=true)
	 		{
	 			q.push(g.top());
	 			ans.push_back({id,g.top().second});
	 			g.pop();
 			}
 			else
 			{
 				break;
 			}
 			val--;
	 	}
	 }
	 // cout<<g.size()<<endl;
	 if (g.size()==0)
	 {
	 	cout<<ans.size()<<endl;
	 	for (int i=0;i<ans.size();i++)
	 	{
	 		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	 	}

	 }
	 else
	 {
	 	cout<<-1<<endl;
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
