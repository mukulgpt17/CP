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
	int n,b;

	cin>>n>>b;
	vector<int> ve(n);
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}  
	
	sort(ve.begin(),ve.end());

	int i=0;
	int j=ve.size()-1;
	int an=0;
	int curr=0;
	while(i<=j)
	{
		an++;
		curr+=b;
		int temp=ve[j];
		j--;
		for (int k=j;k>=0;k--)
		{
			if (ve[k]==temp)
				j--;
			else
				break;
		}
		for (int k=i;k<n;k++)
		{
			if (ve[k]<=curr)
			{
				i=k+1;
			}
			else
			{
				break;
			}
		}

	}

	cout<<an<<endl;
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
