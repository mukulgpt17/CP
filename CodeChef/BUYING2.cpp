#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>


using namespace std;
void fun1(vector<int> vect,int X,int N)
{
	
	int sum=accumulate(vect.begin(),vect.end(),0);
	int min=*min_element(vect.begin(),vect.end());
	
	
	if (sum%X==0)
	{
		cout<<sum/X<<endl;
		return;
	}
	if (vect.size()==1)
	{
		if (sum/X>0)
		{
			cout<<sum/X<<endl;
			return;
		}
		else
		{
			cout<<-1<<endl;
			return;
		}
	}
	if (sum/X==(sum-min)/X)
	{
		cout<<-1<<endl;
		return ;
	}
	else
	{
		cout<<sum/X<<endl;
		return;
	}
	
	
}


int main()
{
	int tc;
	cin >>tc;
	int N,X,temp;
	vector <int> vect;
	for (int i=0;i<tc;i++)
	{
		cin>>N>>X;
		for (int k=0;k<N;k++)
		{
			cin>>temp;
			vect.push_back(temp);
		}
		fun1(vect,X,N);		
		vect.clear();
	}
	return 0;
}
