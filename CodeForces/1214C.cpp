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

  string s;
  cin>>s;

  if (n%2)
  {
  	cout<<"No"<<endl;
  	return ;
  }
  int ct=0;
  int flag=0;
  for (int i=0;i<n;i++)
  {
  	if (ct==-1 && flag==0 && i!=0)
  	{
  		flag=1;
  	}
  	else if (ct<-1 )
  	{
  		cout<<"No"<<endl;
  		return;
  	}

  	if(s[i]=='(')
  		ct++;
  	else
  		ct--;
  }

  if (ct==0)
  {
  	cout<<"Yes"<<endl;
  }
  else
  {
  	cout<<"No"<<endl;
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
    // cin>>t;s

    while (t--)
    {
    	solve();
    }
return 0;
}
