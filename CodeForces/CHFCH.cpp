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
//#define mp make_pair

// k odd 
/*  
0 1 2 3 4 5 6 7 

st=k/2 
ed=n-k/2-1

// k even 
st=k/2 
ed=n-k/2 




*/
void solve()
{
  
 ll n,k;
 cin>>n>>k;

 map<ll,vector<ll>> mp;
 ll t;
 ll flag=0;
 for(ll i=0;i<n;i++)
 {
 	cin>>t;
 	mp[t].pb(i);
 	if (mp[t].size()>=k)
 	{
 		flag=1;
 	}
 }

 if (flag==0)
 {
 	cout<<-1<<endl;
 	return ;
 }
 else
 {	

 	ll mini=INT_MAX;
 	if(k==1)
 	{
 		cout<<0<<endl;
 		return;
 	}


 	if (k%2==1)
 	{
		for(auto i=mp.begin();i!=mp.end();i++)
	 	{
	 		if (i->second.size()>=k)
	 		{
	 			// prefix sum 
	 			// cout<<i->first<<endl;
	 			for (ll j=1;j<i->second.size();j++)
	 			{
	 				(i->second)[j]+=(i->second)[j-1];
	 			}

	 			// for (ll j=0;j<i->second.size();j++)
	 			// {
	 			// 	cout<<i->second[j]<<" ";
	 			// }
	 			// cout<<endl;
	 			for (ll m=k/2;m<(i->second.size()-k/2);m++)
	 			{
	 				ll temp=0;
	 				ll l=(m-k/2);
	 				ll r=m+k/2;
	 				// cout<<"l-r "<<l<<"  "<<r<<endl;
	 				temp+=((m*(m-1))/2- (l*(l-1))/2 );
	 				if (l!=0)
	 				{
	 					temp+=((i->second[l-1]) -(i->second[m-1]));
	 				}
	 				else
	 				{
	 					temp-=(i->second[m-1]);
	 				}
	 				 // cout<<temp<<"left"<<endl;
	 				temp+=(i->second[r])-(i->second[m]);
	 				temp+=((m*(m+1))/2 -(r*(r+1))/2);
	 				mini=min(mini,temp);

	 			}

	 			

	 		}

	 	}
	 	cout<<mini<<endl;
 	}
 	else
 	{	ll mini= 1e18;
 		// cout<<"hello "<<endl;
 		for(auto i=mp.begin();i!=mp.end();i++)
	 	{	
	 		if (i->second.size()>=k)
	 		{

	 			// cout<<"check"<<endl;
 				for (ll j=1;j<i->second.size();j++)
	 			{
	 				(i->second)[j]+=(i->second)[j-1];
	 			}


				// for (ll j=0;j<i->second.size();j++)
 			// 	{
 			// 		// (i->second)[j]+=(i->second)[j-1];
	 		// 		cout<<i->second[j]<<" ";
	 		// 	}
	 			
	 		// 	cout<<endl;

	 			for (ll m=k/2; m +k/2-1<i->second.size();m++)
	 			{
	 				ll l=m-k/2;
	 				ll r=m+(k/2)-1;
	 				// cout<<"l m r "<<l<<" "<<m<<" "<<r<<endl; 
	 				ll temp=0;
	 				temp+=((m*(m-1))/2- (l*(l-1))/2 );

	 				if (l!=0)
	 				{
	 					temp+=(i->second[l-1]) -(i->second[m-1]);
	 				}
	 				else
	 				{
	 					temp-=(i->second[m-1]);
	 				}
	 				// cout<<temp<<endl;
					temp+=i->second[r]-i->second[m-1];
	 				temp+=((m*(m-1))/2 -(r*(r+1))/2);

	 				mini=min(mini,temp);
	 			}


	 		}
	 	}

	 	cout<<mini<<endl;
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


    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
