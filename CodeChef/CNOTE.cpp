#include<bits/stdc++.h>
#include<iostream>

using namespace std ;

void func1(map<int,vector<int>> data,int diff,int K,int N)
{
	for (auto i:data)
	{
		if (i.first<diff)
			continue;
		else
		{
			for (auto k=i.second.begin();k<i.second.end();k++)
			{
				if (*k<=K)
				{
					cout<<"LuckyChef"<<endl;
					return;
				}
			}
		}
	}
	cout<<"UnluckyChef"<<endl;
	return;
	
}




int main()
{
	int test_case;
	cin>>test_case;
	
	int X;
	int Y;
	int K;
	map <int,vector<int>> data;
	int N;
	int num1;
	int num2;
	
	
	for (int i=0;i<test_case;i++)
	{
		cin>>X;
		cin>>Y;
		cin>>K;
		cin>>N;
		
		for (int k=0;k<N;k++)
		{
			cin>>num1;
			cin>>num2;
			data[num1].push_back(num2);
		}
		
		func1(data,X-Y,K,N);	
		data.clear();	
	}
	return 0;
}
