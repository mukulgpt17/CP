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

	string W;
	string P;
	cin>>W;
	cin>>P;

// cout<<"---------------"<<endl;
	char arr[n][n];

	// cout<<W<<endl;
	// cout<<P<<endl;
	for (int i=0;i<n;i++)
	{
		// try going left 
			arr[i][i]='Y';
			int flag=1;
			if (P[i]=='N')
				flag=0;
			for (int j=i-1;j>=0;j--)
			{
				if (flag==0)
					arr[i][j]='N';
				else
				{
					
					if(W[j]=='N')
					{
						flag=0;
						arr[i][j]='N';
					}
					else
					{
						arr[i][j]='Y';
						if(P[j]=='N')
							flag=0;
					}
				}
			}

			flag=1;
			if (P[i]=='N')
				flag=0;
			for (int j=i+1;j<n;j++)
			{
				if (flag==0)
					arr[i][j]='N';
				else
				{
					
					if(W[j]=='N' )
					{
						flag=0;
						arr[i][j]='N';
					}
					else
					{
						arr[i][j]='Y';
						if(P[j]=='N')
							flag=0;
					}
				}
			}
	}

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
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
    for (int q=1; q<=t; q++)
    {
        cout<<"Case #"<<q<<": \n";
        solve();
    }
return 0;
}
