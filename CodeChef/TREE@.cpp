#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main()
{
	boost;
	int t;
	cin>>t;
	map<int,int> mp;
	while (t--)
	{
		int n;
		cin>>n;
		mp.clear();
		int temp;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if (mp.find(temp)!=mp.end())
				mp[temp]++;
			else
				mp[temp]=1;
		}
		
		if (mp.size()==1)
		{
			cout<<1<<endl;
			continue;
		}
		//cout<<mp.size()<<endl;
		int count=0;
		while (mp.size()>1)
		{
		//	cout<<"inside while"<<endl;	
			int temp1=mp.rbegin()->first;
			int temp2=mp.rbegin()->second;
			mp.erase(temp1);
			
			int start=mp.rbegin()->first;
		//	cout<<start<<endl;			
			int maxCount=INT_MIN;
			int maxindex;
			int flag=0;
			for (int i=start;i<temp1;i++)
			{	
				if (mp.find(temp1-i)!=mp.end())
				{	//cout<<i<<"-> "<<temp1-i<<endl;
					if (mp[temp1-i]>maxCount)
					{
						maxCount=mp[temp1-i];
						maxindex=i;
						flag=1;
					}
				}
			}
		if (flag==0)
			{	//cout<<"flag 0"<<endl;
				mp[1]=temp2;
			}
			else
				mp[temp1-maxindex]+=temp2;
			
		//	cout<<"mp_size - /"<<mp.size()<<endl;
			count++;
		}
		//cout<<"mmmm"<<endl;
		cout<<count+1<<endl;
	}
	
	
	
	return 0;
	
	
}
