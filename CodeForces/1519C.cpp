#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)
 
 
using namespace std;
 
vector<ll> uni[200009];
ll stu[200009]; 
ll ski[200009];
 
void solve()
{
	
	
	ll n;
	cin>>n;
	for (int i=0;i<=n;i++)
	{
		uni[i].clear();
	}
	ll te;
	for (int i=0;i<n;i++)
	{
		cin>>stu[i];	
	}
 
	for (int i=0;i<n;i++)
	{
		cin>>ski[i];	
	}	
		
	for (int i=0;i<n;i++)	
	{
		uni[stu[i]].pb(ski[i]);
	}
	
//	cout<<"Check1 "<<endl;
	for (int i=1;i<=n;i++)
	{
		sort(uni[i].begin(),uni[i].end(),greater<ll> ());
	}
	
//	cout<<"Check2"<<endl;
	for (int i=1;i<=n;i++)
	{
		if (uni[i].size()>1)
		{
			for (int j=1;j<uni[i].size();j++)
			{
				uni[i][j]+=uni[i][j-1];
			}
		}
		
	}
//	
//	for (int i=0;i<n;i++)
//	{
//		//if (uni[i].size()>1)
//		{
//			for (int j=0;j<uni[i].size();j++)
//			{
//			//	uni[i][j]+=uni[i][j-1];
//			cout<<uni[i][j]<<" ";
//			}
//			cout<<endl;
//		}
//		
//	}
		
//	for (int i=0;i<n;i++)
//	{
//		cout<<uni[i].size()<<endl;
//	}
		
//	cout<<"check 3 "<<endl;
	vector<ll> ans(n+1) ;
	
	for (int i=1;i<=n;i++)
	{	//ll temp=0;
		for (int k=1;k<=uni[i].size();k++)
		{	
			ll teams=uni[i].size()/k;
			ll player=teams*k;
			ans[k]+=uni[i][player-1];
		}
	}
	
	for (int i=1;i<=n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
 
}
 
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}
