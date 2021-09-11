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

	string s="";

	if (n%2==0)
	{
		while (n>1)
		{
			s+='1';
			n-=2;
		}
		cout<<s<<endl;
	}
	else
	{
		s+='7';
		n-=3;

		while (n>1)
		{
			s+='1';
			n-=2;
		}
		cout<<s<<endl;

	}
}


/* 
0- 6 
1 -2 
2 -5 
3- 5
4-4 
5-5 
6-6
7-3
8-7
9-6

7 
711

8
1111

9
7111

2 - 1
3 - 7 
4 - 11
5 - 71 
6 - 111 





*/


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
    	cout<<"Hello";		
    }
return 0;
}
