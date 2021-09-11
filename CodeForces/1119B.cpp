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


/// not done 
void solve()
{
  
	int n,h;
	cin>>n>>k;

	if(n==1)
	{
		cout<<1<<endl;
	}
	vector<int> ve(n);
	for (int i=0;i<n;i++)
		cin>>ve[i];

	int tot=2;
	int cs=max(ve[0],ve[1]);

	int j=2;
	int flag=1;
	while(j<n)
	{
		if (flag==1)
		{
			if (j+1<n)
			{
				int a=ve[j];
				int b=ve[j+1];

				if (a>cs && b>cs)
				{

				}


			}
			else
			{

			}
		}
		else
		{



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
