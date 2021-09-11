#include<bits/stdc++.h>


using namespace std;



int main()
{
	
	int t;
	cin>>t;
	
	
	while (t--)
	{
		
		int n;
		cin>>n;
		
		int arr[n];
		for (int i=0;i<n;i++)
			cin>>arr[i];
		
		map<double,set<int>> mp;
		
		for (int i=0;i<n;i++)
		{
			for (int j=i+1;j<n;j++)
			{
				if (arr[j]<arr[i])
				{
					double time=(double)(j-i)/(arr[i]-arr[j]);
					mp[time].insert(j);
					mp[time].insert(i);
				}
			}
		}
		for (auto  it=mp.begin();it!=mp.end();it++)
		{
			cout<<it->first<<" -> ";
			for(auto itr=it->second.begin();itr!=it->second.end();itr++)
			{
				cout<<*itr<<" ";
			}
			cout<<endl;
		}
		int mini=INT_MAX;
		int maxi=INT_MIN;
		for (int i=0;i<n;i++)
		{
			bool infected[n];
			memset(infected,false,sizeof(infected));
			infected[i]=true;
	
			for (auto it=mp.begin();it!=mp.end();it++)
			{	int flag=0;
			   
				for(auto itr=it->second.begin();itr!=it->second.end();itr++)
				{	
					if(infected[*itr]==true)
					{
						flag=1;
						break;
					}
				}
				cout<<endl;
				
				if (flag==1)
				{
				for(auto itr=it->second.begin();itr!=it->second.end();itr++)
				{
					infected[*itr]=true;
				}
				
				}
			}
		int count=0;
		for (int i=0;i<n;i++)
		{
			if(infected[i]==true)
			{
				count++;
			}
			
		}	
	//	cout<<count<<endl;
		mini=min(mini,count);
		maxi=max(maxi,count);
		}
	//	cout<<mini<<" "<<maxi<<endl;
		
	}
	
	
	return 0;
	
}
