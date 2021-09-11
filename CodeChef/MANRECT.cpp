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
  
  ll xl,yl,xu,yu;
  ll mx=1000000000;
  // Q1 
	cout<<"Q"<<" "<<0<<" "<<0<<endl;
	cout.flush();

	ll q1; // q1=x1+y1 
	cin>>q1;

	// xy=x+y ;

 // Q2 
	cout<<"Q"<<" "<<mx<<" "<<0<<endl;
	cout.flush();


	ll q2; // q2=mx-x2+y1 --> x2=mx-q2+y1
	cin>>q2;
	// Q3 

	

	cout<<"Q"<<" "<<0<<" "<<mx<<endl;
	cout.flush();
	
	ll q3;  //q3=mx-y2+x1;  --> y2=mx-q3+x1;
	cin>>q3;

	// q1-q2 
	ll t=q1-q2;
	t+=mx;
	t/=2;


	// x1+y1 - mx +x2 -y1 === x1+x2-mx


	cout<<"Q"<<" "<<t<<" "<<0<<endl;
	cout.flush();


	ll q4;
	cin>>q4;

	yl=q4;

	xl=q1-yl;
	xu=mx-q2+yl;
	yu=mx-q3+xl;


	cout<<"A"<<" "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<endl;
	ll an;
	cin>>an;
	return ;




	
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
