#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,X,p,k;
		cin>>N>>X>>p>>k;
		vector<int> v;
		int temp;
		for(int i=0;i<N;i++)
		{
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		
		if (binary_search(v.begin(),v.end(),X))
		{
			auto low=std::lower_bound(v.begin(),v.end(),X);
			auto high=std::upper_bound(v.begin(),v.end(),X);
			int start =low-v.begin()+1;
			int end=high-v.begin();
			cout<<"start "<<start<<endl;
			cout<<"end "<<end<<endl;
			
			if (k==p)
			{
				if (k>=start && k<=end)
				{
					cout<<0<<endl;
				}
				else if (k>end)
				{
					cout<<k-end<<endl;
				}
				else if (k<start)
				{
					cout<<start-k<<endl;
				}
			}
			
			else if (k<p)
			{
				if(k>=end)
				{
					cout<<-1<<endl;
				}
				else
				{
					if(p>=start && p<=end)
					{cout<<0<<endl;
					}
					else if (p>end)
					{
						cout<<p-end<<endl;
					}
					else if (p<start)
					{
						cout<<start-p<<endl;
					}
				}
			}
			else if (k>p)
			{
				if (start>k)
				{
					cout<<-1<<endl;
				}
				else
				{
					if (p>=start && p<=end)
					{
						cout<<0<<endl;
					}
					else if (p<start)
					{
						cout<<start-p<<endl;
					}
					else if (p>end)
					{
						cout<<p-end<<endl;
					}
				}
			}
			
			
		}
		else
		{
			if (k==p)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	}
	return 0;
}
