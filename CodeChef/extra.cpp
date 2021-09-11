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

	vector<ll> ve(n);
	int b=sqrt(n);

	vector<vector<ll>> bl((n+b-1)/b);
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
		bl[i/b].push_back(ve[i]);
	}

	for (int i=0;i<bl.size();i++)
	{

		sort(bl[i].begin(),bl[i].end());
	}

	int q;
	cin>>q;
	// cout<<"B " <<b<<endl;
	for(int i=0;i<q;i++)
	{
		
		ll k;
		cin>>k;
		if (k==0)
		{
			ll a,bb,c;
			cin>>a>>bb>>c;
			// cout<<"------------------------------------"<<endl;
			a--;
			bb--;
			ll count=0;
			int lf=a/b;
			int rf=bb/b;
			// cout<<"lrf "<<lf<<" "<<rf<<endl;

			if (lf==rf)
			{

				for (int i=a;i<=bb;i++)
				{
					if (ve[i]>=c)
					count++;
				}

				cout<<count<<endl;
			}
			else
			{
				for (int i=a;i<=lf*b+b-1;i++)
				{
					if (ve[i]>=c)
					{
						count++;
					}
				}
				// cout<<count<<endl;
				for (int i=lf+1;i<rf;i++)
				{

					// bin _search 
					count+=(bl[i].end()-lower_bound(bl[i].begin(), bl[i].end(), c));

				}
				// cout<<count<<endl;
				for (int i=rf*b;i<=bb;i++)
					{
						if (ve[i]>=c)
							count++;
					}

					cout<<count<<endl;

			}





		}
		else
		{
			int a,bb;
			cin>>a>>bb;
			a--;
			int temp=ve[a];
			ve[a]=bb;
			int block=a/b;

			int st=0;
			int ed=bl[block].size()-1;
			int index=-1;
			while (st<=ed)
			{
				int mid=(st+ed)/2;
				if (bl[block][mid]==temp)
				{
					bl[block][mid]=bb;
					// ed--;
					break;
				}
				else if (bl[block][mid]>temp)
				{
					ed=mid-1;
				}
				else
				{
					st=mid+1;
				}
			}

			sort(bl[block].begin(),bl[block].end());

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
    while (t--)
    {
    	solve();
    }
return 0;
}
