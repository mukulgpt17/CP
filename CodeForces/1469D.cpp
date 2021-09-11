#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
int cei(int x,int y)
{
	if (x%y==0)
	{
		return x/y;
	}
	else
	{
		return x/y+1;
	}
}
/*
void fun()
{
	int n;
	cin>>n;
	int x=n;
	int y=n;
	vector<pair<int,int>> vec;
	while (y!=2)
	{	cout<<cei(5,2)<<endl;
		if (y<cei(x,y))
		{	y++;
			cout<<"y "<<y<<endl;
			for (int i=x-1;i>=y+1;i--)
			{
//				cout<<i<<" "<<x<<endl;
				vec.pb({i,x});
			}
//			
//			cout<<x<<" "<<y<<endl;
//			cout<<x<<" "<<y<<endl;

			vec.pb({x,y});
			vec.pb({x,y});
			x=y;
		}	
		y--;
	}
	if (x>2)
	{
		for (int i=x-1;i>=y+1;i--)
			{
//				cout<<i<<" "<<x<<endl;
				vec.pb({i,x});
			}
//			
//			cout<<x<<" "<<y<<endl;
//			cout<<x<<" "<<y<<endl;
			vec.pb({x,y});
			vec.pb({x,y});
			x=y;
	}
	
	cout<<vec.size()<<endl;
	for (int i=0;i<vec.size();i++)
	{
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	return;
}
*/

void fun()
{
	
	int n;
	cin>>n;
	
	int curr=n;
	vector<pair<int,int>> pr;
	while (curr>2)
	{
		int y=max(1,(int)sqrt(curr)-1);
		while (y<(curr+y-1)/y)
		y++;
		
		for(int i=curr-1;i>y;i--)
		{
			pr.push_back({i,curr});
		}
		pr.push_back({curr,y});
		pr.push_back({curr,y});
		
		curr=y;
	}
	
	cout<<pr.size()<<endl;
	for (int i=0;i<pr.size();i++)
	{
		cout<<pr[i].first<<" "<<pr[i].second<<endl;
	}
	
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

