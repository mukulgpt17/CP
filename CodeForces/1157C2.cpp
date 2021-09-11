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
	vector<int> ve(n);

	for(int i=0;i<n;i++)
	{
		cin>>ve[i];
	}
		

	int l=0;
	int r=n-1;
	int prev=-1;
	string s="";

	while (l<=r)
	{
		if (ve[l]==ve[r] && ve[l]>prev)
		{
			int lle=0;
			int ree=0;
			int curr=ve[l];
			for (int j=l+1;j<=r;j++)
			{
				if (ve[j]>curr)
				{
					lle++;
					curr=ve[j];
				}
				else
					break;
			}

			curr=ve[r];

			for (int j=r-1;j>=l;j--)
			{


				if (ve[j]>curr)
				{
					ree++;
					curr=ve[j];
				}
				else
					break;
			}

			// cout<< lle << " "<<ree<<endl;
			if (lle>ree)
			{
				for (int j=0;j<=lle;j++)
					s+='L';
			}
			else
			{
				for (int j=0;j<=ree;j++)
					s+='R';
			}

			break;
		}
		else if (ve[l]==ve[r] && ve[l]<=prev)
		{	
			break;
		}
		else
		{
			if (ve[l]<ve[r] && ve[l]>prev)
		  	{
		  		s+='L';
		  		prev=ve[l];
		  		l++;
		  	}
		  	else if (ve[r]>prev)
		  	{
		  		s+='R';
		  		prev=ve[r];
		  		r--;
		  	}
		  	else if (ve[l]>prev)
		  	{
		  		s+='L';
		  		prev=ve[l];
		  		l++;
		  	}
		  	else
		  	{
		  		break;
		  	}
		}
	}

	cout<<s.size()<<endl;
	cout<<s<<endl;



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
