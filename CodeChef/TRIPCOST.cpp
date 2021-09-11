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

ll n,d;
ll D[100001];
ll C[100001];

int getDays(int cost)
{

	ll prev_vis=0;
	ll prev_vis_index=0;
	ll ct=1;

	int i=1;

	while (i<=n)
	{
		if(D[i]-prev_vis<=d)
		{
			i++;
		}
		else
		{
			int j=prev_vis_index+1;
			int new_vis_index=-1;
			int new_vis;
			ll curr_dis=0;
			while (j<i)
			{
				if (C[j]<=cost && D[j]-prev_vis<=d)
				{
					new_vis_index=j;
					new_vis=D[j];
					// j++;
				}
				j++;
			}

			if (new_vis_index!=-1)
			{
				ct++;
				prev_vis=new_vis;
				prev_vis_index=new_vis_index;
			}
			else
			{
				return INT_MAX;
			}
		}
	}


	return ct;
}



void solve()
{
  
	cin>>n>>d;
	D[0]=0;
	for (int i=1;i<=n;i++)
	{
		cin>>D[i]>>C[i];

		D[i]=D[i]+D[i-1];
	}

	int days=getDays(n);

	cout<<"check1 "<<days<<endl;
	int lo=0;
	int hi=n;

	while (lo<=hi)
	{
		int mid=(lo+hi)/2;
		cout<<mid<<endl;
		int dd=getDays(mid);

		if (dd>days)
		{
			lo=mid+1;
		}
		else
		{
			hi=mid;
		}
	}

	cout<<days<<" "<<hi<<endl;
  
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
    cout<<"hello"<<endl;
    while (t--)
    {
    	solve();
    }
return 0;
}
