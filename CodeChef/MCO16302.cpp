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

// WRONG 
void solve()
{
	  
	int n,k;
	cin>>n>>k;

	vector<pair<int,vector<ll>>> ve(n);

	for (int i=0;i<n;i++)
	{	ve[i].first=0;
		for (int j=0;j<k;j++)
		{
			int temp;
			cin>>temp;
			ve[i].second.pb(temp);		
		}
	}

	for (int i=0;i<n;i++)
	{
		for (int j=1;j<k;j++)
		{
			ve[i].second[j]+=ve[i].second[j-1];
		}
	}


	int prev=n-1;

	int clap=0;

	while (true)
	{
		int flag=0;
		int val=INT_MAX;
		int id=-1;

		for (int i=0;i<n;i++)
		{
			if (ve[i].first<k)
			{	
				if (ve[i].second[ve[i].first]<val)
				{val=ve[i].second[ve[i].first];
								id=i;flag=1;}
			}
		}

		if (flag==0)
			break;
		else
		{
			if (prev!=id)
			{
				clap++;
				ve[id].first++;
				prev=id;
			}
			else
			{
				ve[id].first++;				
			}

		}

	}
	cout<<clap<<endl;
}


main() 
{
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
