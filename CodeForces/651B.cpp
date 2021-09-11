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

int arr[1001];

void solve()
{
  	
	int n;
	cin>>n;

	int te;

	int mx=0;

	for (int i=0;i<n;i++)
	{
		cin>>te;

		arr[te]++;
		mx=max(mx,te);
	}

	int flag=1;
	int ct=0;
	while (flag==1)
	{
		int cur=0;

		for (int i=1;i<=mx;i++)
		{
			if(arr[i]>=1)
			{
				cur++;
				arr[i]--;
			}
		}

		if (cur==0 || cur==1)
		{
			flag=0;
		}
		else
		{
			ct+=cur-1;
		}

	}

	cout<<ct<<endl;

  
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
