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
  
  ll n ;
  cin>>n;

  map<ll ,ll> mp;
ll t;
ll flag=0;
    for (int i=0;i<n;i++)
  	{

  		cin>>t;
  		mp[t]++;
  		if (t==5 || t==7)
  		{
  			flag=1;
  		}
  	}
  	map<string,ll> mpp;

  	if (flag==1)
  	{
  		cout<<-1<<endl;
  		return ;
  	}
  	else
  	{
  		if (mp[3]!=0)
  		{
  			if (mp[1]>=mp[3] && mp[6]>=mp[3])
  			{
  				mpp["1 3 6"]=mp[3];
  				mp[1]-=mp[3];
  				mp[6]-=mp[3];
  				mp[3]-=mp[3];
  			}
  			else
  			{
  				cout<<-1<<endl;
  				return;
  			}
  		}

  		if(mp[2]!=0)
  		{

  			
  				if (mp[1]!=0)
  				{
  					if (mp[1]==mp[4]+mp[6] && mp[2]>=mp[1])
  					{
  						if (mp[4]!=0)
  						{	
  							mpp["1 2 4"]=min(mp[1],mp[4]);
  							ll x =min(mp[1],mp[4]);
  							mp[1]-=x;
  							mp[4]-=x;
  							mp[2]-=x;
  						}

  						if (mp[6]!=0)
  						{
  							mpp["1 2 6"]=min(mp[1],mp[6]);
  							ll x=min(mp[1],mp[6]);
  							mp[1]-=x;
  							mp[6]-=x;
  							mp[2]-=x;
  						}
  					}
  					else
  					{
  						cout<<-1<<endl;
  						return;
  					}
  				}
  				// cout<<mp[2]<<" "<<mp[4]<<" "<<mp[6]<<endl;
  				// if (mp[2]==mp[4] && mp[2]==mp[6])
  				// {
  				// 	mpp["2 4 6"]=mp[2];
  				// 	mp[2]-=mp[2];
  				// 	mp[4]-=mp[4];
  				// 	mp[6]-=mp[6];
  				// }
  				// else
  				// {
  				// 	cout<<-1<<endl;
  				// 	return ;
  				// }

  			


  		}

  		for (auto i=mp.begin();i!=mp.end();i++)
  		{
  			if (i->second!=0)
  			{
  				cout<<-1<<endl;
  				return ;
  			}
  		}

  	}

  	for(auto i=mpp.begin();i!=mpp.end();i++)
  	{
  		for (int k=i->second;k>0;k--)
  		{
  			cout<<i->first<<endl;
  		}


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
