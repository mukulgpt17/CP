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
  int n,p;
  cin>>n>>p;

  string s;
  cin>>s;


  int i=0,j=n-1;
  int cp=0;

  vector<int> visited;
  visited.assign(n,0);
  while (i<n && j>=0 && cp<p && j>i)
  {
  		if (s[i]=='a')
  		{
  			i++;
  		}
  		else
  		{
  			
  				{
  					if (s[j]=='a')
  					{

  						swap(s[i],s[j]);
  						visited[i]=1;
  						visited[j]=1;
  						i++;
  						j--;
  						cp++;	
					}
					else
					{
						j--;
					}


  				}
  		}
  }
  i=0;
  // cout<<cp<<endl;
  while (p-cp>0 && i<n)
  {
  	if (s[i]=='a')
  		i++;
  	else
  	{	if (visited[i]==1)
  		{
  			s[i]='a';
  			cp++;
  		}
  		else if (p-cp>=2)
		 { 
		 	s[i]='a';
	  	  	cp+=2;
	  	 }
  	 	i++;
}
  }

  cout<<s<<endl;
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
