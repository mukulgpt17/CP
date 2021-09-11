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

int arr[401];
void solve()
{
  
  int n,m;
  cin>>n>>m;

  memset(arr,0,sizeof(arr));
  vector<int> ve(m);
  set<int> s;

  for (int i=0;i<m;i++)
  {
  	cin>>ve[i];
  	// arr[ve[i]]++;
  }
  int an=0;
  
  for (int i=0;i<=400;i++)
  {
  	arr[i]=m;
  }

  for (int i=0;i<m;i++)
  {
  	if(s.find(ve[i])!=s.end())
  	{
  		int val=m;
  		for (int j=i+1;j<m;j++)
  		{
  			if(ve[j]==ve[i])
  			{
  				val=j;
  				break;
  			}
  		}
  		arr[ve[i]]=val;
  	}
  	else
  	{
  		if (s.size()<n)
  		{
  			s.insert(ve[i]);
  			
  			int val=m;
  			for (int j=i+1;j<m;j++)
  			{
	  			if(ve[j]==ve[i])
	  			{
	  				val=j;
	  				break;
	  			}
  			}

  		   	arr[ve[i]]=val;
  			an++;

  		}
  		else
  		{

  			int mn=-1;
  			int val;

  			for (auto k:s)
  			{
  				if (arr[k]>mn)
  				{
  					mn=arr[k];
  					val=k;
  				}
  			}
  			
  			s.erase(val);
  			an++;
  			s.insert(ve[i]);

  			val=m;
  			for (int j=i+1;j<m;j++)
  			{
  			if(ve[j]==ve[i])
  			{
  				val=j;
  				break;
  			}
  			}
  			arr[ve[i]]=val;
  		}
  	}
  	// cout<<arr[i]<<" ";
  }
  // cout<<endl;


  cout<<an<<endl;
  
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
