#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
char grid[100][100];
bool visited[100][100];
int x[]={-1,1,0,0};
int y[]={0,0,-1,1};
bool isValid(int x,int y,int n,int m)
{
	if(x<0 || x>=n)
	return false;
	if (y<0 || y>=m)
	return false;
	
	return true;
}
void fun()
{
	memset(visited,false,sizeof(visited));
	int n,m;
	cin>>n>>m;
	bool isGood=false;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			char temp;
			cin>>temp;
			grid[i][j]=temp;
			if (temp=='G')
			isGood=true;
			
		}
	}
//	cout<<"check"<<endl;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (grid[i][j]=='B')
			{
				for(int k=0;k<4;k++)
				{
					if (isValid(i+x[k],j+y[k],n,m) && grid[i+x[k]][j+y[k]]=='.')
					{
						grid[i+x[k]][j+y[k]]='#';
					}
				}
			}
		}
	}
	
	// check if nm 
//	cout<<"check"<<endl;
	if (grid[n-1][m-1]=='#')
	{	//cout<<"check1"<<endl;
		if (isGood)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
	else
	{	
		
		queue<pair<int,int>> q;
		q.push({n-1,m-1});
		visited[n-1][m-1]=true;
	
		while (q.empty()!=true)
		{
			pair<int,int> temp=q.front();
			q.pop();
			int i=temp.first;
			int j=temp.second;
			
			for (int k=0;k<4;k++)
			{
				if (isValid(i+x[k],j+y[k],n,m) && grid[i+x[k]][j+y[k]]!='#' && visited[i+x[k]][j+y[k]]==false)
				{
					visited[i+x[k]][j+y[k]]=true;
					q.push({i+x[k],j+y[k]});
				}
			}
		}
		
		bool ans=true;
		
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
							
				if ((grid[i][j]=='G' && visited[i][j]==false)||(grid[i][j]=='B'&& visited[i][j]==true))
				{
					ans=false;
					break;
				}	
			}
		}
		
		
		if (ans==false)
		{	
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}	
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

