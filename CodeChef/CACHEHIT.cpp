#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void fun1(vector<int> vec,int N,int B,int M)
{
	int count=1;
	vector <int> X{0,0};
	int start;
	int end;
	
	start=B*floor(vec[0]/B);
	if (vec[0]%B==0)
		{
			end=B*(vec[0]/B+1);
		}
	else		
		end=B*ceil(vec[0]/B)-1;
	
	X[0]=start;
	
	if (end>=N)
	{
		X[1]=N-1;
	}
	else
		X[1]=end-1;

	
	for (auto i=(vec.begin()+1);i<vec.end();i++)
	{
		if ((*i<=X[1] && *i>=X[0])==false)
		{
		
			count++;
			start=B*floor(*i/B);
			if (*i%B==0)
			{
				end=B*(*i/B+1)-1;
			}
			else
				end=B*ceil(*i/B);
			X[0]=start;
			if (end>=N)
			{
			X[1]=N-1;
			}
			else
			X[1]=end-1;
		}
	
	}

	cout<<count<<endl;
	
}




int main()
{
	int test_case;
	cin>>test_case;
	
	int N,B,M;
	vector<int> v;
	int temp;
	
	for (int i=0;i<test_case;i++)
	{
		cin>>N>>B>>M;
		for(int k=0;k<M;k++)
		{
			cin>>temp;
			v.push_back(temp);
		}
	}
	
	fun1(v,N,B,M);
	v.clear();
	
	return 0;
}
	
	
	
	

