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

	string ans="";
	int flag=0;
	int i;
	int id=-1;
	for (i=n-1;i>=0;i--)
	{
		if (s[i]=='1')
			ans+='1';
		else
		{	id=i;
			break;
		}
	}

	for (;i>=0;i--)
	{
		if (s[i]=='1')
		{
			flag=1;
			break;
		}
	}

	// cout<<flag<<" "<<id<<endl;

	if (flag==0)
	{

		for(int p=id;p>=0;p--)
		{
			ans+='0';
		}
	}
	else
	{
		ans+='0';
		for (int p=0;p<n;p++)
		{
			if (s[p]=='0')
				ans+='0';
			else
				break;
		}

	}

	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;









  
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
