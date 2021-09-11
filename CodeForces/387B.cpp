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
	int n,m;
	cin>>n>>m;

	vector<int> ve(n);
	vector<int> vec(m);
	int msk[m];

	memset(msk,0,sizeof(msk));

	// for (auto i:msk)
	// 	cout<<i<<" ";
	// cout<<endl;


	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}

	for (int i=0;i<m;i++)
	{
		cin>>vec[i];
	}
	

	sort(ve.begin(),ve.end());
	sort(vec.begin(),vec.end());

	int an=0;

	// cout<<"t1"<<endl;
	if (n>m)
	{
		an+=n-m;
		// cout<<"t11"<<endl;
		for (int i=0;i<m;i++)
		{	
			auto ii =lower_bound(vec.begin(),vec.end(),ve[i]);
			if (ii-vec.begin()>=m)
				an++;
			else
			{
				int id=ii-vec.begin();
				int flag=0;

				for (int j=id;j<m;j++)
				{
					if (msk[j]==0)
					{
						msk[j]=1;
						flag=1;
						break;
					}
				}

				if (flag==0)
					an++;
			}

		}
	}
	else
	{	
		// cout<<"t12"<<endl;
		for (auto i:ve)
		{	
			// cout<<i<<endl;
			auto ii =lower_bound(vec.begin(),vec.end(),i);
			// cout<<ii-vec.begin()<<endl;
			if (ii-vec.begin()>=m)
				an++;
			else
			{
				int id=ii-vec.begin();
				// cout<<id<<endl;
				int flag=0;

				for (int j=id;j<m;j++)
				{
					if (msk[j]==0)
					{
						msk[j]=1;
						flag=1;
						break;
					}
					// cout<<j<<endl;
				}

				// cout<<flag<<endl;
				// cout<<"come"<<endl;
				if (flag==0)
					an++;
			}

		}

	}
	// cout<<"HEllo"<<endl;
	cout<<an<<endl;
  
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
