#include<iostream>
#include<bits/stdc++.h>


using namespace std;
void fun1(int N,int K,vector<int> temp)
{
	int sum1=0;
	int sum2;
	sort (temp.begin(),temp.end());
	
	for (int i=0;i<N;i++)
	{
		sum1+=temp[i];
		if (i==K-1)
			sum2=sum1;	
	}
	cout<<abs(sum1-2*sum2)<<endl;
	
	
}


int main()
{
	int test_case;
	cin>>test_case;
	int N;
	int K;
	int temp1;
	vector<int> temp;
	
	for(int i=0;i<test_case;i++)
	{
		cin>>N;
		cin>>K;
		
		for (int k=0;k<N;k++)
		{
			cin>>temp1;
			temp.push_back(temp1);
		}
		
		fun1(N,K,temp);
		temp.clear();
	}
	
	return 0;
}

