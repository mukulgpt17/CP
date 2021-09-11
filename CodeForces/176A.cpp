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
bool cmp(pair<pair<ll,ll>,ll> a ,pair<pair<ll,ll>,ll> b)
{

	return (a.first.second-a.first.first)>(b.first.second-b.first.first);
}


void solve()
{
  
	ll n,m,k;
	cin>>n>>m>>k;

	vector<vector<vector<ll>>> vec;

	for (int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		vector<vector<ll>> t;
		for (int j=0;j<m;j++)
		{
			vector<ll> te(3);
			cin>>te[0]>>te[1]>>te[2];
			t.pb(te);
		}
		vec.pb(t);
	}
	// cout<<"hello"<<endl;
	int prof=0;
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{

			ll tmp1=0;
			ll tmp2=0;

			vector<pair<pair<ll,ll>,ll>> pr1;
			vector<pair<pair<ll,ll>,ll>> pr2;
// cout<<"hello2"<<endl;
			for (int item=0;item<m;item++)
			{
				pr1.pb({{vec[i][item][0],vec[j][item][1]},vec[i][item][2]});
				pr2.pb({{vec[j][item][0],vec[i][item][1]},vec[j][item][2]});
			}


			sort(pr1.begin(),pr1.end(),cmp);
			sort(pr2.begin(),pr2.end(),cmp);

			// A B 

			ll cc=0;
			for (int item=0;item<m;item++)
			{
				if (cc<k && pr1[item].first.second-pr1[item].first.first>0)
				{
					tmp1+=((pr1[item].first.second-pr1[item].first.first)*min(k-cc,pr1[item].second));
					cc+=pr1[item].second;
				}
				else
				{
					break;
				}
			}

			cc=0;
			for (int item=0;item<m;item++)
			{
				if (cc<k && pr2[item].first.second-pr2[item].first.first>0)
				{	
					tmp2+=((pr2[item].first.second-pr2[item].first.first)*min(k-cc,pr2[item].second));
					cc+=pr2[item].second;
				}
				else
				{
					break;
				}
			}
			// cout<<i<<" "<<j<<" ->  "<<tmp1<<" "<<tmp2<<endl;
			prof=max(prof,max(tmp1,tmp2));
		}
	}
	
	cout<<prof<<endl;
  
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
