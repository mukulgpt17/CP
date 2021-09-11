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
 // correct one !

void solve()
{
  
  ll n;
  cin>>n;
  set<char> ss;
  vector<char> ve;
  map<char,vector<string>> mp;
  string s;
  for (int i=0;i<n;i++)
  {
  	cin>>s;
  	mp[s[0]].push_back(s.substr(1,s.size()-1));
  	if(ss.find(s[0])==ss.end())
  	{
  		ve.push_back(s[0]);
  	}
  	ss.insert(s[0]);
  }


  // for (auto i:mp)
  // {
  // 	cout<<i.first<<" ";
  // 	for(auto j:i.second)
  // 		cout<<j<<" ";
  // 	cout<<endl;
  // }

ll answer=0;
  for (int i=0;i<ve.size();i++)
  {
  	for (int j=0;j<ve.size();j++)
  	{
  		ll comm=0;

  		set<string> temp;
  		for (auto k: mp[ve[i]])
  			temp.insert(k);

  		for (auto k:mp[ve[j]])
  		{
  			if (temp.find(k)!=temp.end())
  			{
  				comm++;
  			}
  		}

  		answer+=((mp[ve[i]].size()-comm)*(mp[ve[j]].size()-comm));
  	}
  }


  cout<<answer<<endl;





  
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
