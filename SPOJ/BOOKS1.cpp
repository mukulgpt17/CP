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

bool check(ll num,vector<ll> & ve,ll k)
{

	ll count=1;
	ll curr=0;
	int id=-1;
	for (int i=0;i<ve.size();i++)
	{
		if(curr+ve[i]<=num)
		{
			curr+=ve[i];
		}
		else
		{
			count++;
			curr=ve[i];
		}
	}
	// cout<<num<<" "<<count<<endl;
	if (count>k) return false;
	else return true;

}


void solve()
{
	ll n,k;
	cin>>n>>k;

	vector<ll> ve(n);
	ll su=0;
	ll maxi=INT_MIN;
	for(int i=0;i<n;i++)
		cin>>ve[i],su+=ve[i],maxi=max(maxi,ve[i]);

	ll st=maxi;
	ll ed=su;
	// cout<<maxi<<" "<<ed<<endl;
	ll an;


	while (st<=ed)
	{
		
		ll mid=(st+ed)/2;
		// cout<<mid<<endl;
		if(check(mid,ve,k))
		{
			an=mid;
			ed=mid-1;
		}
		else
		{
			st=mid+1;
		}

	}
	// cout<<an<<endl;
	// cout<<an<<endl;

	ll sum=0;
	vector <int > v;
	ll cnt = 1;
	for(int i=n-1;i>-1;i--)
	{
		if(sum+ve[i] > an || i == k-cnt-1)
		{
			sum=0;
			v.pb(-1);
			cnt++;
		}
		sum+=ve[i];
		v.pb(ve[i]);
	}
	reverse(v.begin(),v.end());

	int l = v.size();
	for(int i=0;i<l;i++)
	{
		if(v[i] == -1 )
			cout<<"/ ";
		else
			cout << v[i] << " ";
	}
	cout << endl;

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
