#include<bits/stdc++.h>
// NOT SOLVED 

using namespace std;
unordered_map<string,int> mp;

int fun (int n,int x,int y,vector<int> &xx,vector<int> &yy)
{	string sx="";
	sx+=to_string(n);
	sx+=to_string(x);
	sx+=to_string(y);
	if (n==0)
		return 0;
	else if (mp.find(sx)!=mp.end())
	{
		return mp[sx];
	}
	else
	{
		if (xx[n-1]>=yy[n-1])
		{
			if (x>0)
			{
				return xx[n-1]+fun(n-1,x-1,y,xx,yy);	
			}
			else
			{
				return yy[n-1]+fun(n-1,x,y-1,xx,yy);
			}
		}
		else
		{
			if (y>0)
			{
				return yy[n-1]+fun(n-1,x,y-1,xx,yy);
			}
			else{
				return xx[n-1]+fun(n-1,x-1,y,xx,yy);
			}
		}
	}
	
}

int main()
{
	mp.clear();
	int n,x,y;
	cin>>n>>x>>y;
	vector<int> xx;
	vector<int> yy;
	for (int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		xx.push_back(temp);
	}
	for (int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		yy.push_back(temp);
	}
	cout<<fun(n,x,y,xx,yy)<<endl;
	return 0;
}
