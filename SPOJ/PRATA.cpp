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


ll fun2(ll time ,ll rank)
{
	ll te=sqrt((2*time)/rank)+1;


	ll mn=0;
	ll mx=te;

	ll an=0;
	while(mn<=mx)
	{
		
		ll mid=(mn+mx)/2;

		if (mid*(mid+1)<=(2*time)/rank)
		{
			an=mid;
			mn=mid+1;
		}
		else
			mx=mid-1;

	}

	return an;

}




bool fun(ll time,ll p,vector<ll> &ve)
{
	
	ll count=0;

	for (int i=0;i<ve.size();i++)
	{
		count+=fun2(time,ve[i]);
	}

	if (count>=p)return true;
	else return false;
}



void solve()
{
	
	ll p;
	cin>> p;

	ll te;
	cin>>te;

	vector<ll> ve(te);
	
	for (int i=0;i<ve.size();i++)
	{
		cin>>ve[i];
	}

	sort(ve.begin(),ve.end());

	ll an=0;

	ll mn=0;
	ll mx=ve[0]*((p*(p+1))/2)+10;

	while (mn<=mx)
	{

		ll mid=(mn+mx)/2;

		if (fun(mid,p,ve))
			an=mid,mx=mid-1;
		else
			mn=mid+1;
	}

	cout<<an<<endl;
}

main() 
{
  
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;
    cin>>t;
//  	
    while (t--)
    {
    	solve();
    }
return 0;

}
