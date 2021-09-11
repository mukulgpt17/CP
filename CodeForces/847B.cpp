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
	
	set<int> s;
	vector<int> ve;
	int te;
	for (int i=1;i<=n;i++)
	{
		cin>>te;
		ve.push_back(te);
	}
	
	vector<vector<int>> vec;
	while (s.size()!=n)
	{
		vector<int> te;
		int mini=INT_MIN;
		for (int i=0;i<ve.size();i++)
		{
			if (ve[i]>mini && s.find(ve[i])==s.end())
			{
				te.push_back(ve[i]);
				s.insert(ve[i]);
				mini=ve[i];
			
			}
		}
		vec.push_back(te);
	}
	
	for (int i=0;i<vec.size();i++)
	{
		for (int j=0;j<vec[i].size();j++)
		{
			cout<<vec[i][j]<<" ";
			
		}	
		cout<<endl;
	}	
}

void fun2()
{
	int n;
	cin>>n;
	
	map<int,int> mp ;
	
	vector<int> ve;
	int t;
	
	for (int i=0;i<n;i++)
	{
		cin>>t;
		ve.push_back(t);
		mp[i]=t;
	}
	while (mp.empty()!=true)
	{
		int mini=INT_MIN;
		vector<int> te;
		for (auto i=mp.begin();i!=mp.end();i++)
		{
			if (i->second>mini)
			{
				cout<<i->second<<" ";
				mini=i->second;
				te.push_back(i->first);
			}
			
		}
		cout<<endl;
		
		for (int i=0;i<te.size();i++)
		{
			mp.erase(te[i]);
		}
	}	
}

void fun3()
{
	int n;
	cin>>n;
	
	vector<int> ve;
	int t;
	
	for (int i=0;i<n;i++)
	{
		cin>>t;
		ve.push_back(t);
//		mp[i]=t;
	}
	
	vector<int> vec[n+1];
	int size=0;
	
	
	for (int i=0;i<ve.size();i++)
	{
		if(i==0)
		{
			vec[0].push_back(ve[i]);
			size++;	
		}	
		else
		{	if (ve[i]<vec[size-1].back())
			{
				size++;
				vec[size-1].push_back(ve[i]);
			}
			else
			{
			
				int l=0;
				int r=size-1;
				int ans=0;
				while (l<=r)
				{
					int mid=(l+r)/2;
					if (vec[mid].back()<ve[i])
					{
						ans=mid;
						r=mid-1;
					}
					if (vec[mid].back()>ve[i])
					{
						l=mid+1;			
					}			
				}
				vec[ans].push_back(ve[i]);
			}
		}
	}
	
	for (int i=0;i<size;i++)
	{
		for (int j=0;j<vec[i].size();j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	
}


int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 fun3();
	}
 return 0;
}

