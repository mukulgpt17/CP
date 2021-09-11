#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;
void fun()
{
	// here we need to find posssible k 
	/* 
	i.e 
	b*k+k <=a (will make one pair) 
	here for each b need to find 
	b*k+k <=x  (x maximum) 
	and b>k (coz k is remainder so its range(0...b-1) 
	
	k*k< x 
	k<sqrt(x) 
	
	now for each k 
	we need to find maximum b (i.e for all this possible b (k) is possible to give a (where a<=x) )
	so for each k  to find possible b 
	cond:
	1: b>k (if b<k then k wont be the remainder value ) 
	2 maximum b possible min(y,(x/k -1))  
	so total possible b for each k: 
				max(0,min(y,(x/k)-1));
	
	*/ 
	ll x,y;
	cin>>x>>y;
	ll answer=0;
	for (int k=1;k*k<x;k++)
	{
		answer+=max(0,(int)min(((x/k)-1),y)-k);
	}
	
	
	cout<<answer<<endl;
	return;
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

