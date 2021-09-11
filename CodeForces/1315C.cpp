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

	vector<int> an(2*n); 


	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	} 

	
	int msk[2*n+1];
	memset(msk,0,sizeof(msk));

	for (int i=0;i<n;i++)
	{
		an[2*i]=ve[i];
		msk[ve[i]]=1;
	}

	// for (int i=1;i<=2*n;i++)
	// {
	// 	cout<<msk[i]<<" ";
	// }
	// cout<<endl;
	for (int i=1;i<2*n;i+=2)
	{	
		// cout<<an[i-1]<<" ";
		for(int j=an[i-1]+1;j<=2*n;j++)
		{	
			if(msk[j]==0)
			{
				msk[j]=1;
				an[i]=j;
				break;
			}
		}
	}

	// cout<<endl;
	for (auto i:an)
	{
		if(i==0)
		{
			cout<<-1<<endl;
			return ;
		}
	}

	for(auto i:an)
	{
		cout<<i<<" ";
	}
	
	cout<<endl;


  
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
