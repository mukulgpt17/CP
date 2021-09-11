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
  
string s;
cin>>s;

vector<ll> lf;
vector<ll> rf;

int ii=-1;
int jj=-1;

for (int i=0;i<s.size();i++)
{
	if (s[i]=='(')
	{
		ii=i;
		break;
	}
}


for (int i=s.size()-1;i>=0;i--)
{

	if (s[i]==')')
	{
		jj=i;
		break;
	}
}

// cout<<ii<<" "<<jj<<endl;
if (ii==-1 || jj ==-1 )
{
	cout<<0<<endl;
	return;
}

while (ii<jj)
{
	// cout<<ii<<" "<<jj<<endl;
	lf.pb(ii+1);
	rf.pb(jj+1);
	ll tei=ii;
	ll tej=jj;
	for (int i=ii+1;i<s.size();i++)
	{
		if (s[i]=='(')
		{
			ii=i;
			break;
		}
	}
	// cout<<ii<<endl;
	if (ii==tei)
		ii=s.size();

	for (int i=jj-1;i>=0;i--)
	{
		if (s[i]==')')
		{
			jj=i;
			break;
		}
	}
	// cout<<jj<<endl;
	if (jj==tej)
	{
		jj=-1;
	}	

}


if (lf.size()==0)
{
	cout<<0<<endl;
}
else
{	cout<<1<<endl;
	cout<<lf.size()*2<<endl;
	for (int i=0;i<lf.size();i++)
	{
		cout<<lf[i]<<" ";
	}
	reverse(rf.begin(),rf.end());
	for (int i=0;i<rf.size();i++)
	{
		cout<<rf[i]<<" ";
	}
	 cout<<endl;
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
