#include<bits/stdc++.h>
#define ull unsigned long long int
const int m=2001;
using namespace std;
int adj[2001][2001];
vector<bitset<m> > vec;

//not yet solved completly !



void fun2()
{
	int n;
	cin>>n;

	string temp;
	vec.clear();
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		bitset<m> tt(string(temp));
		vec.push_back(tt);
	}
	int count=0;
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
						
			if(vec[i][j]=='0')
			{
				bitset<m> t1(string(vec[i]));
				bitset<m> t2(string(vec[j]));
				if (t1 & t2 !=0)
				{
					count++;		
					}			
			}
		}
	}	
		
		
	cout<<count<<endl;
		
}

void fun()
{
	int n;
	cin>>n;
	
	
	for (int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		for (int j=0;j<n;j++)
		{
			if (temp[j]=='1')
			{
				adj[i][j]=1;
			}
			else
			{
				adj[i][j]=0;
			}
		}
		
	}
	
	
	int count=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{	if (i==j)
			continue;
			if (adj[i][j]==0)
			{
				for (int k=0;k<n;k++)
				{
					if (adj[i][k]==1 && adj[j][k]==1)
					{
						count++;
						break;
					}
				}
			}
			
			
		}
	}
	
	cout<<count<<endl;
}



int main()
{
	fun2();

 return 0;
}

