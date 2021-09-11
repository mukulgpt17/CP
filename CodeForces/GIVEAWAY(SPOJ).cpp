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

int bin_search(int val,vector<int> &vv)
{

	int l=0;
	int r=vv.size()-1;
	int an=vv.size();
	while (l<=r)
	{
		int mid=(l+r)/2;
		if (vv[mid]>=val)
		{
			an=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}

	return (vv.size()-an);
}

void solve()
{
  
	ll n;
	cin>>n;

	vector<ll> vec(n);

	for (int i=0;i<n;i++)
	{
		cin>>vec[i];
	}

	int b=sqrt(n);
	int tot=(int)((n+b-1)/b);
	// cout<<tot<<endl;
	vector<int> block[tot];

	for (int i=0;i<n;i++)
	{
		block[i/b].pb(vec[i]);
	}

	for(int i=0;i<tot;i++)
		sort(block[i].begin(),block[i].end());

	int q;
	cin>>q;

	for(int i=0;i<q;i++)
	{

		int a;
		cin>>a;
		if (a==0)
		{
			int l,r,val;
			cin>>l>>r>>val;
			l--;
			r--;

			int bl=l/b;
			int br=r/b;
			int an=0;
			if (bl==br)
			{
				// same block

				for (int j=l;j<=r;j++)
				{
					if (vec[j]>=val)
					{
						an++;
					}
				}

			}
			else
			{
				for(int j=l;j<(bl+1)*b;j++)
				{
					if (vec[j]>=val)
						an++;
				}

				for(int j=br*b;j<=r;j++)
				{
					if (vec[j]>=val)
						an++;
				}


				for(int j=bl+1;j<br;j++)
				{

					an+=bin_search(val,block[j]);
				}

					

			}
		
			cout<<an<<endl;
		}
		else
		{
			int id,x;
			cin>>id>>x;
			id--;
			int bl_id=id/b;
			int index=-1;
			int temp=vec[id];
			for (int j=0;j<block[bl_id].size();j++)
			{
				if (block[bl_id][j]==temp)
				{
					block[bl_id].erase(block[bl_id].begin()+j);
					vec[id]=x;
					break;
				}
			}


			// insert the value x to the bl_id 

			// for(int j=0;j<block[bl_id].size();j++)
			// {
			// 	if (block[bl_id][j]>x)
			// 	{
			// 		block[bl_id].insert(block[bl_id].begin()+j,x);
			// 		break;
			// 	}
			// }

			block[bl_id].pb(x);
			sort(block[bl_id].begin(),block[bl_id].end());

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
    // cout<<"check1"<<endl;
    while (t--)
    {
    	solve();
    }
return 0;
}
