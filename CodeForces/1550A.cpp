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
int arr[5001];
void solve()
{
  
	int n;
	cin>>n;

	cout<<arr[n]<<endl;
	return;


  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);

	
	int ct=1;
	int i=1;
	int cr=1;
	int cv=1;
	while (ct<=5000)
	{

		for (int i=1;i<=cr;i++)
		{
			if (ct<=5000)
			{
				arr[ct]=cv;
				ct++;
			}
			else
			{
				break;
			}
		}

		cv++;
		cr+=2;
	}
	
  	int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
