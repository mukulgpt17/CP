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

 	int vis[6];
 	int num[n];
 	// int rem[6]={4,8,15,16,23,42};
 
 	map<int,int> mp ;
 	
 	mp[4]=1;
 	mp[8]=2;
	mp[15]=3;
	mp[16]=4;
	mp[23]=5;	
	mp[42]=6;
	
 	FOR(i,n)
 	{
 		cin>>num[i];
 	}

 	memset(vis,0,sizeof(vis));

 	FOR(i,n)
 	{
 		if (num[i]==4)
 		{
 			vis[0]++;
 		}
 		else if (num[i]==8)
 		{
 			if (vis[0]>0)
 			{
 				vis[0]--;
 				vis[1]++;
 			}
 		}
 		else if (num[i]==15)
 		{

 			if (vis[1]>0)
 			{
 				vis[1]--;
 				vis[2]++;
 			}
 		}
 		else if (num[i]==16)
 		{
 			if (vis[2]>0)
 			{
 				vis[2]--;
 				vis[3]++;
 			}

 		}
 		else if (num[i]==23)
 		{

 			if (vis[3]>0)
 			{
 				vis[3]--;
 				vis[4]++;
 			}
 		}
 		else
 		{
 			if (vis[4]>0)
 			{
 				vis[4]--;
 				vis[5]++;
 			}

 		}
 	}


 	cout<<n-6*vis[5]<<endl;


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
