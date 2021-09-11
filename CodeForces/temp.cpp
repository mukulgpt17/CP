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

int solve1(int *arr,long long temp,int n)
{
	int i=0;
	int ct=0;
	while (i<n && temp>0)
	{
		if (arr[i]<temp)
		{
			ct++;
			temp=2*(temp-arr[i]);
			
		}
		else
		{
			break;
		}
		i++;
	}
	
	cout<<ct<<endl;
	
	
	
	
}


void solve()
{
	
	int n,q;
	cin>>n>>q;
	
//	
	int ve[n];
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}
	
	sort(ve,ve+n);
	
	for (int i=0;i<q;i++)
	{	
		ll temp;
		cin>>temp;
		
		solve1(ve,temp,n);
	}
	
}


main() {
//	#ifndef ONLINE_JUDGE
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
//#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t=1;
    cin>>t;
//    cout<<"hello"<<endl;
    while (t--)
    {
    	solve();
    }
return 0;
}

