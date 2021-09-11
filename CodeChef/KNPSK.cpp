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
  	
ll ni;
cin>>ni;

vector<ll> twos;
vector<ll> ones;

ll a,b;
ll n=0;
for (int i=0;i<ni;i++)
{
	
	cin>>a>>b;
	n+=a;
	if (a==1)
	{
		ones.pb(b);
	}
	else
	{
		twos.pb(b);
	}
}


sort(twos.begin(),twos.end());
sort(ones.begin(),ones.end());

reverse(twos.begin(),twos.end());
reverse(ones.begin(),ones.end());

vector<ll> ans(n+1);
int i1=0;
int i2=0;

if (ones.size()>0)
{
	ans[1]=ones[0];
	i1++;	
}
else
{
	ans[1]=0;
}

for (int i=3;i<=n;i+=2)
{
	ll t1=0;
	ll t2=0;

	if (i1<ones.size())
	{
		t1+=ones[i1];
	}
	if (i1+1<ones.size())
	{
		t1+=ones[i1+1];
	}


	if (i2<twos.size())
	{
		t2+=twos[i2];
	}

	if (t2>t1)
	{
		ans[i]=ans[i-2]+t2;
		if (i2<twos.size())
		{
			i2++;
		}
	}
	else
	{
		ans[i]=ans[i-2]+t1;
		if (i1<ones.size())
		{
			i1++;
		}
		if (i1<ones.size())
		{
			i1++;
		}
	}
}

i1=0;
i2=0;


for (int i=2;i<=n;i+=2)
{
	ll t1=0;
	ll t2=0;

	if (i1<ones.size())
	{
		t1+=ones[i1];
	}
	if (i1+1<ones.size())
	{
		t1+=ones[i1+1];
	}


	if (i2<twos.size())
	{
		t2+=twos[i2];
	}

	if (t2>t1)
	{
		ans[i]=ans[i-2]+t2;
		if (i2<twos.size())
		{
			i2++;
		}
	}
	else
	{
		ans[i]=ans[i-2]+t1;
		if (i1<twos.size())
		{
			i1++;
		}
		if (i1<twos.size())
		{
			i1++;
		}
	}
}

for (int i=1;i<=n;i++)
{
	cout<<ans[i]<<" ";
}
cout<<endl;


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
