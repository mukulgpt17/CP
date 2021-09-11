#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void fun()
{
	int n;
	cin>>n;
	int a,b,c,d;
	pair<int,int> temp;
	map<pair<int,int>,int> mp;
	for (int i=0;i<n;i++)
	{
		
		cin>>a>>b>>c>>d;
		
		temp={c-a,d-b};
		int val=__gcd(abs(temp.first),abs(temp.second));
		temp.first=temp.first/val;
		temp.second=temp.second	/val;	
		
//		cout<<temp.first<<" "<<temp.second<<endl;
		if (mp.find(temp)!=mp.end())
		{
			mp[temp]++;
		}
		else
		{
			mp[temp]=1;
		}
		
	}
	
//	for (auto i=mp.begin();i!=mp.end();i++)
//	{
//		cout<<i->first.first<<" "<<i->first.second<<" "<<i->second<<endl;
//	}
	
	ull answer=0;
	
	while (mp.size()!=0)
	{
		pair<int,int> te=mp.begin()->first;
		int te1;
		if (mp.find({-1*te.first,-1*te.second})!=mp.end())
		{	
			te1=mp[te]*mp[{-1*te.first,-1*te.second}];
//			mp[te]=0;
//			mp[{-1*te.first,-1*te.second}]=0;
			mp.erase(te);
			mp.erase({-1*te.first,-1*te.second});
			answer+=te1;
		}
		else
		{
			mp.erase(te);
			}	
	}

	cout<<answer<<endl;
	return ;

}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
//	cout<<__gcd(8,8);

 return 0;
}

/*

1
5
0 0 1 1
2 2 10 10
-10 -10 23 23
-5 -5 -7 -7
1 2 3 4

*/



