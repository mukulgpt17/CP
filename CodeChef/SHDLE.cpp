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

bool cmp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{

	return a.first.first>b.first.first;

}

void solve()
{
  int n;
  cin>>n;
  int arr[1001];
  memset(arr,0,sizeof(arr));
  int mx=0;
  vector<pair<pair<int,int>,int>> ve(n);

  for (int i=0;i<n;i++)
  {
  	cin>>ve[i].second>>ve[i].first.second>>ve[i].first.first;
  	mx=max(mx,ve[i].first.second);
  }

  sort(ve.begin(),ve.end(),cmp);
 
  // for(int i=0;i<n;i++)
  // 	{
  // 		cout<<ve[i].first.first<<" ";
  // 	}
  // 	cout<<endl;


  vector<int> dead;
  int tot=0;
  for (int i=0;i<n;i++)
  {	int flag=0;
  	for (int j=ve[i].first.second;j>=1;j--)
  	{
  		if (arr[j]==0)
  		{
  			arr[j]=ve[i].second;
  			flag=1;
  			break;
  		}

  	}
  	if (flag)
  	{
  		tot+=ve[i].first.first;
  		// dead.pb(ve[i].second);
  	}
  }

 for (int i=1;i<=mx;i++)
 {
 	if (arr[i]!=0)
 		dead.pb(arr[i]);
 }

for(auto i:dead)
	cout<<i<<" ";

 cout<<endl;

 cout<<tot<<endl;



  
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
