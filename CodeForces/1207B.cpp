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

  int arr[n][m];
  int arr1[n][m];

  for (int i=0;i<n;i++)
  {
  	for(int j=0;j<m;j++)
  	{	
  		cin>>arr[i][j];
  		arr1[i][j]=0;
  	}
  }

 

  vector<pair<int,int>> ans;
  for (int i=0;i<n;i++)
  {
  	for (int j=0;j<m;j++)
  	{
  		

  		if (i==n-1 || j==m-1)
  		{
  			continue;
  		}
  		else
  		{
  			if (arr[i][j]==1)
  			{
  				
  					if (arr[i+1][j]==1 && arr[i][j+1]==1 && arr[i+1][j+1]==1)
  					{
  						arr1[i][j]=1;
  						arr1[i+1][j]=1;
  						arr1[i][j+1]=1;
  						arr1[i+1][j+1]=1;
  						ans.push_back({i,j});
  					}
  					// else
  					
  				
  			}
  			


  		}

  		


  	}
  }
  for(int i=0;i<n;i++)
  {
  	for (int j=0;j<m;j++)
  	{
  		if (arr[i][j]!=arr1[i][j])
  		{
  			cout<<-1<<endl;
  			return;
  		}

  	}
  }
  cout<<ans.size()<<endl;
  for (auto i:ans)
  {
  	cout<<i.first+1<<" "<<i.second+1<<endl;
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
