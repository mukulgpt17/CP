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
  
	int n;
	cin>>n;

	string a;
	string b;

	cin>>a;
	cin>>b;
	int a_r=0;
	int b_r=0;

	for(int i=0;i<a.size();i++)
	{
		if (a[i]=='*')
			a_r++;
		
		if (b[i]=='*')
			b_r++;
	}


	int tot=0;
	if(a_r>=1 && b_r>=1)
		tot++;

	int c1=0;
	int c2=0;

	for (int i=0;i<n;i++)
	{
		if (a[i]=='*') c1++;
		if (b[i]=='*') c2++;

		if (c1==2)
		{
			tot++;
			if (a[i]==b[i]=='*')
			{
				c1=1;
				c2=1;
			}
			else if (a[i]=='*' && b[i]!='*')
			{
				c1=1;
				c2=0;
			}
		}

		if (c2==2)
		{
			tot++;
			if (a[i]==b[i]=='*')
			{
				c1=1;
				c2=1;
			}
			else if (a[i]!='*' && b[i]=='*')
			{
				c1=0;
				c2=1;
			}
		}	
	}

	cout<<tot<<endl;
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
