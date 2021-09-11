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
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>> ve;
	int k;
	for (int i=1;i<=m;i++)
	{
		cin>>k;
		vector<int> te;
		int tt;
		for (int j=1;j<=k;j++)
		{	cin>>tt;
			te.push_back(tt);
		}
		ve.push_back(te);
	}
	
	int lim=(int)(ceil(double(m/2)));
	map<int,int> mp;
	vector<int> day;
	for(int i=0;i<m;i++)
	{	int mini=INT_MAX;
		int curr;
		for (int j=0;j<ve[i].size();j++)
		{
			if (mp.find(ve[i][j])==mp.end())
			{
				if (0<mini)
				{
					curr=ve[i][j];
					mini=0;	
				}	
			}
			else
			{
				if (mp[ve[i][j]]<mini)
				{
					curr=ve[i][j];
					mini=mp[ve[i][j]];
				}
			}
		}
		day.push_back(curr);
		mp[curr]+=1;
		if (mp[curr]>lim)
		{
			cout<<"NO"<<endl;
			return ;
		}
		
	}
	
	cout<<"YES"<<endl;
	for(int i=0;i<day.size();i++)
	{
		cout<<day[i]<<" ";
	}
	cout<<endl;

}


void fun2 ()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> ve;
	for (int i=1;i<=m;i++)
	{
		vector<int> te;
		int f;
		cin>>f;
		int fi;
		for (int i=1;i<=f;i++)
		{
			cin>>fi;
			te.push_back(fi);
		}
		ve.push_back(te);
	}
	int lim=(int)ceil(double(m/2));
	vector<int> day;
	map<int,int> mp;
	int maxi=0;
	int val;
	for (int i=0;i<m;i++)
	{
		day.push_back(ve[i][0]);
		mp[ve[i][0]]++;
		if (mp[ve[i][0]]>maxi)
		{
			maxi=mp[ve[i][0]];
			val=ve[i][0];
		}
	}
	
	if (maxi<=lim)
	{
		cout<<"YES"<<endl;
		for (int i=0;i<day.size();i++)
		{
			cout<<day[i]<<" ";
		}
		cout<<endl;
	}
	else
	{	
		int flag=0;
		for (int i=0;i<m;i++)
		{
			if (maxi<=lim)
			{
				flag=2;
				break;
			}
			if (day[i]==val)
			{
				if (ve[i].size()==1)
				{
//					cout<<"NO"<<endl;
					
				}
				else
				{
					day[i]=ve[i][1];
					maxi--;
				}
						
			}		
		}
		if (maxi<=lim)
		{
			cout<<"YES"<<endl;
			for (int i=0;i<day.size();i++)
			{
				cout<<day[i]<<" ";
			}
			cout<<endl;
			
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
	
}

int main()
{
	int t=0;
	cin>>t;
	while (t--)
	{
	 fun2();
	}

 return 0;
}

