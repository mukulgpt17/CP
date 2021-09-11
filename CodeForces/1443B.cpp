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
  int a,b;
  cin>>a>>b;

  string s;
  cin>>s;

  vector<int> ve(s.size()+1);
  ve[0]=0;

  for (int i=0;i<s.size();i++)
  {

  	if (s[i]=='0')
  	{
  		ve[i+1]=ve[i];
  	}
  	else
  	{
  		if(i==0)
  		{
  			ve[i+1]=a;
  			continue;
  		}
  		int flag=1;
  		int ct;

  		if (s[i-1]=='1')
  		{
  			ve[i+1]=ve[i];
  		}
  		else 
  		{
  			int dd=0;
  			for(int j=i-1;j>=0;j--)
  			{
  				if (s[j]=='0')
  					dd++;
  				else
  				{
  					ct=ve[j+1];
  					flag=0;
  					break;
  				}
  			}

  			if (flag==1)
  			{
  				ve[i+1]=a;
  			}
  			else
  			{
  				ve[i+1]=min(ct+dd*b,ve[i]+a);
  			}
  		}
  	}


  }
  
  cout<<ve[s.size()]<<endl;

	  
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
