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

ll a=0;
ll b=0;

string s;
cin>>s;

int i=0;
int j=s.size()-1;
int zc=0;

while(i<j)
{
	if(s[i]==s[j])
	{
		if (s[i]=='0')
		{
			zc+=2;
		}
	}
	else{
		b++;
	}
	i++;
	j--;
}


if (s.size()%2)
{
	if (s[i]=='0')
	{
		zc++;
	}
}

// cout<<zc<<endl;
if (zc==1)
{
	a++;
}
else if (zc>0 && zc%2)
{
	b+=2;
}
else if (zc>0 && zc%2==0)
{
	a+=2;
}

if(a==b)
{
	cout<<"DRAW"<<endl;
}
else if (a>b)
{
	cout<<"BOB"<<endl;
}
else
{
	cout<<"ALICE"<<endl;
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
