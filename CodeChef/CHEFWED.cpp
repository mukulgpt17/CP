#include<bits/stdc++.h>

using namespace std;




int main()
{
	int t;
	cin>>t;
	
	for (int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int flag=0;
		unordered_map<int,int> mp1;
		unordered_map<int,int> mp2;
		
		int table=1;
		int final_cost=0;
		int curr_cost=0;
		int temp;
		int prev_cost=0;
		for (int m=0;m<n;m++)
		{
			cin>>temp;
			if (mp1.find(temp)!=mp1.end())
			{
				if (mp1[temp]==1)
				{
					curr_cost+=2;
					mp1[temp]++;
				}	
				else
				{
					curr_cost++;
					mp1[temp]++;
				}
		    }
			else
				mp1[temp]=1;
					
			if (curr_cost>k)
			{   if (m==n-1)
				{	if (k==1)
					{
						table++;
						if (mp1[temp]==2)
						{
							curr_cost=curr_cost-2;
							mp1[temp]--;
						}
						else 
						{
							curr_cost--;
							mp1[temp]--;
						}
						final_cost+=curr_cost;
					}
					else
					{
					final_cost+=curr_cost;
					}
					flag=1;
					continue;	
				}
				table++;
				if (mp1[temp]==2)
				{
					curr_cost=curr_cost-2;
					mp1[temp]--;
				}
				else 
				{
					curr_cost--;
					mp1[temp]--;
				}
				final_cost+=curr_cost;
				prev_cost=curr_cost;
				curr_cost=0;
				mp2=mp1;
				mp1.clear();
				mp1[temp]=1;
			}
			
		
		}
		if (flag!=1)
		{
			int cost1=0;
			int cost2=0;
			unordered_map<int,int> mp3;
			mp3=mp2;
			for (auto itr=mp1.begin();itr!=mp1.end();itr++)
			{
				
				if (mp3.find(itr->first)!=mp3.end())
					mp3[itr->first]+=itr->second;
				else
					mp3[itr->first]=itr->second;				
			}
			
			for(auto itr=mp3.begin();itr!=mp3.end();itr++)
			{
				
				if (itr->second>1)
					cost1+=itr->second;
			}
			
			
			final_cost=final_cost-prev_cost + cost1;
		}
		
		final_cost=final_cost+k*table;
		cout<<final_cost<<endl;
	}
	return 0;
}
