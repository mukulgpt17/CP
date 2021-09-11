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
	vector<int> arr1(n);
	vector<int> arr2(n);
	int msk[n];
	memset(msk,0,sizeof(msk));

	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
 
	// cout<<s1<<" "<<s2<<endl;
	for(int i=0;i<n;i++)
	{
		arr1[i]=s1[i]-'0';
	}

	for(int i=0;i<n;i++)
	{
		arr2[i]=s2[i]-'0';
	}


	
  	
  	sort(arr2.begin(),arr2.end());


 	int a1=0;
 	int a2=0;

 	for (int i=0;i<n;i++)
 	{
 		auto ii=lower_bound(arr2.begin(),arr2.end(),arr1[i]);
 		int id=ii-arr2.begin();

 		if (id==n)
 		{
 			a1++;
 		}
 		else
 		{	
 			int flag=1;
 			while(id<n)
 			{
 				if (msk[id]==0)
 				{
 					msk[id]=1;
 					flag=0;
 					break;
 				}
 				id++;
 			}

 			if (flag==1)
 			{
 				a1++;
 			}
 		}
 	}


 	memset(msk,0,sizeof(msk));

 	for(int i=0;i<n;i++)
 	{


 		auto ii=upper_bound(arr2.begin(),arr2.end(),arr1[i]);
 		int id=ii-arr2.begin();

 		if (id==n)
 		{
 			// cout<<"hello"<<endl;
 			// a2++;
 		}
 		else
 		{	
 			int flag=1;
 			while(id<n)
 			{
 				if (msk[id]==0)
 				{
 					msk[id]=1;
 					flag=0;
 					break;
 				}
 				id++;
 			}

 			if (flag==0)
 			{
 				a2++;
 			}
 		}


 	}


 	cout<<a1<<endl;
 	cout<<a2<<endl;

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
