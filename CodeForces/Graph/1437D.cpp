#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
void fun()
{	
	int n;
	cin>>n;
	vector<int> node;
	int temp;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		node.push_back(temp);
	}
	
	queue<pair<int,int>> q;
	
	q.push({node[0],0});
	int index=1;
	int maxi=INT_MIN;
	while (q.empty()!=true)
	{
		pair<int,int> temp=q.front();
		q.pop();
		
		maxi=max(maxi,temp.second);
		int curr=INT_MIN;
		while (index<n)
		{
			if (node[index]>curr)
			{
				curr=node[index];
				index++;
				q.push({curr,temp.second+1});
			}
			else
			{
				break;
			}
		}
	}
	
	cout<<maxi<<endl;
	
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

