#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for (int to=0;to<t;to++)
	{
		
		vector<int> v1;
		vector<int> v2;
		unordered_map<int,int> mp1;
		unordered_map<int,int> mp2;
		unordered_map<int,int> mp;
		int globalMin=INT_MAX;
		int n;
		cin>>n;
		int temp;
		for(int i=0;i<n;i++)
		{	
			cin>>temp;
			globalMin=min(globalMin,temp);
			if (mp1.find(temp)!=mp1.end())
				mp1[temp]++;
			else
				mp1[temp]=1;
			
			if (mp.find(temp)!=mp.end())
				mp[temp]++;
			else
				mp[temp]=1;			
		}
		for(int i=0;i<n;i++)
		{	
			cin>>temp;
			if (mp2.find(temp)!=mp2.end())
				mp2[temp]++;
			else
				mp2[temp]=1;
			
			if (mp.find(temp)!=mp.end())
				mp[temp]++;
			else
				mp[temp]=1;			
		}
		
		int flag=1;
		for (auto itr=mp.begin();itr!=mp.end();itr++)
		{
			if(itr->second%2!=0)
			{
				flag=0;
				break;
			}
		}
		if (flag==0)
		{
			cout<<-1<<endl;
			continue;
		}
//		cout<<"test1"<<endl;
	
		for (auto itr=mp1.begin();itr!=mp1.end();itr++)
		{
			if (mp2.find(itr->first)!=mp2.end())
			{
				int mini=min(itr->second,mp1[itr->first]);
				mp2[itr->first]=mp2[itr->first]-mini;
				itr->second=itr->second-mini;
				
			//	if (mp2[itr->first]==0)
			//		mp2.erase(itr->first);
			//	if (itr->second==0)
			//		mp1.erase(itr->first)
			}	
		}
		unordered_map <int,int> mp11;
		unordered_map <int,int> mp22;
		
		for (auto itr=mp1.begin();itr!=mp1.end();itr++)
		{
			if (itr->second!=0)
			{
				mp11[itr->first]=itr->second;
			}
			
		}
		for (auto itr=mp2.begin();itr!=mp2.end();itr++)
		{
			if (itr->second!=0)
			{
				mp22[itr->first]=itr->second;
			}
			
		}
		mp1=mp11;
		mp2=mp22;
		
		
		for (auto itr=mp1.begin();itr!=mp1.end();itr++)
		{
			while(itr->second!=0)
			{
				v1.push_back(itr->first);
				itr->second-=2;
			}
		}
		for (auto itr=mp2.begin();itr!=mp2.end();itr++)
		{
			while(itr->second!=0)
			{
				v2.push_back(itr->first);
				itr->second-=2;
			}
		}
		
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		
		//cout<<globalMin<<endl;
		int cost=0;
		
		for (int i=0;i<v1.size();i++)
		{
			cost +=min(min(v1[i],v2[v2.size()-i-1]),2*globalMin);
		}
		
		cout<<cost<<endl;
		

	}
	
	return 0;	
}
