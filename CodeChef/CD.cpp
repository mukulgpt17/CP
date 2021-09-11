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
		
		unsigned long long int final_cost=0;
		unsigned long long int temp_cost=0;
		int table=1;
		
		unordered_map<int,int> mp1;
		unordered_map<int,int> mp2;
		unordered_map<int,int> mp3;
		
		int temp;
		vector<int> v;
		int flag=0;
		for (int m=0;m<n;m++)
		{
			cin>>temp;
			v.push_back(temp);
			if (mp1.find(temp)!=mp1.end())
			{
				if (mp1[temp]==1)
				{
					temp_cost+=2;
					mp1[temp]++;
				}
				else
				{
					temp_cost++;
					mp1[temp]++;
					
				}
			}
			else
			{
				mp1[temp]=1;
			}
			
			if (temp_cost>=2*k)
			{
				if (m==n-1)
					flag=1;
				unsigned long long int cost1=temp_cost;
				unsigned long long int cost2=0;
				
				mp2.clear();
				mp3.clear();
				mp3=mp1;
				
				int mini_cost=cost1+cost2;
				int final_count=-1;
				int temp_count=0;
			//	cout<<"Start"<<endl;
			//	for (auto itr=v.begin();itr!=v.end();itr++)
			//		cout<<*itr<<"- ";
			//	cout<<endl;
				
			//	if(mp2.empty()==true)
			//		cout<<"check done"<<endl;
				
				for(auto itr=v.rbegin();itr!=v.rend();itr++)
				{
					temp_count++;
					int temp1=*itr;
					if (mp2.find(temp1)!=mp2.end())
					{
						if (mp1[temp1]==2)
						{
							cost1=cost1-2;
							mp1[temp1]--;
						}
						else if (mp1[temp1]==1) 
						{
							mp1.erase(temp1);
						}
						else
						{	cost1--;
							mp1[temp1]--;
						}
						
						
						if (mp2[temp1]==1)
						{
							cost2=cost2+2;
							mp2[temp1]++;
						}
						else 
						{
							cost2++;
							mp2[temp1]++;
						}
					}
					else
					{
						if (mp1[temp1]==2)
						{
							cost1=cost1-2;
							mp1[temp1]--;
						}
						else if (mp1[temp1]==1) 
						{
							mp1.erase(temp1);
						}
						else
						{	cost1--;
							mp1[temp1]--;
						}
						
						
						mp2[temp1]=1;		
						
					}
					
					if(cost1+cost2<mini_cost)
					{
						mini_cost=cost1+cost2;
						final_count=temp_count;
					}
				}
			//	cout<<"cost1 "<<cost1<<"cost2 "<<cost2<<endl;
			//	cout<<mini_cost<<" "<<final_count<<endl;
				if (mini_cost<k)
				{	final_cost+=cost1;
					temp_cost=0;
					mp1.clear();
					vector<int> v2;
					for(auto itr=v.rbegin();itr!=v.rend();itr++)
					{	if (final_count<=0)
							break;
						v2.push_back(*itr);
						if (mp1.find(*itr)!=mp1.end())
						{
							if (mp1[*itr]==1)
							{
								temp_cost+=2;
								mp1[*itr]++;
							}
							else
							{
								temp_cost++;
								mp1[*itr]++;
							}
						}
						else
						{
							mp1[*itr]=1;
						}
						
						final_count--;
						
						
					}
					table++;
					reverse(v2.begin(),v2.end());
					v=v2;
			//		cout<<"end"<<endl;
					
			//		for (auto itr=v.begin();itr!=v.end();itr++)
			//			cout<<*itr<<" ";
			//		cout<<endl;
			//		cout<<"Map"<<endl;
			//		for (auto itr= mp1.begin();itr!=mp1.end();itr++)	
			//			cout<<itr->first<<" "<<itr->second<<"...";
			//		cout<<endl;
				}
				else
				{	//cout<<"I came here"<<endl;
					mp1=mp3;
				}	
			}	
		}
		if (flag==0)
		{
		cout<<"I came here"<<endl;
		if (temp_cost>k )
		{		
				unsigned long long int cost1=temp_cost;
				unsigned long long int cost2=0;
				
				mp2.clear();
				mp3.clear();
				mp3=mp1;
				
				int mini_cost=cost1+cost2;
				int final_count=-1;
				int temp_count=0;
				
				for(auto itr=v.rbegin();itr!=v.rend();itr++)
				{
					temp_count++;
					int temp1=*itr;
					if (mp2.find(temp1)!=mp2.end())
					{
						if (mp1[temp1]==2)
						{
							cost1=cost1-2;
							mp1[temp1]--;
						}
						else if (mp1[temp1]==1) 
						{
							mp1.erase(temp1);
						}
						else
						{	cost1--;
							mp1[temp1]--;
						}
						
						
						if (mp2[temp1]==1)
						{
							cost2=cost2+2;
							mp2[temp1]++;
						}
						else 
						{
							cost2++;
							mp2[temp1]++;
						}
					}
					else
					{
						if (mp1[temp1]==2)
						{
							cost1=cost1-2;
							mp1[temp1]--;
						}
						else if (mp1[temp1]==1) 
						{
							mp1.erase(temp1);
						}
						else
						{	cost1--;
							mp1[temp1]--;
						}
						
						
						mp2[temp1]=1;		
						
					}
					
					if(cost1+cost2<mini_cost)
					{
						mini_cost=cost1+cost2;
						final_count=temp_count;
					}
				}
				
				if (mini_cost<temp_cost-k)
				{	final_cost+=cost1;
					temp_cost=cost2;
					mp1.clear();
					vector<int> v2;
					for(auto itr=v.rbegin();itr!=v.rend();itr++)
					{	if (final_count<=0)
							break;
						v2.push_back(*itr);
						if (mp1.find(*itr)!=mp1.end())
						{
							mp1[*itr]++;
						}
						else
						{
							mp1[*itr]=1;
						}
						
						final_count--;
						
						
					}
					table++;
					reverse(v2.begin(),v2.end());
					v=v2;
				}
				else
				{	
					mp1=mp3;
				}
			final_cost+=cost2;	
			}	
			
			
			
		else{
			final_cost+=temp_cost;
		}
	}
 		final_cost+=k*table;
 		
		cout<<final_cost<<endl;
	}
	
	
	
	return 0;
}
