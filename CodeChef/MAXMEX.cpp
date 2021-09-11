#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;


void fun1(vector<long long int> vec,long long int N,long long int M)

{
	
	sort (vec.begin(),vec.end());
	int index;
	int num;
	int flag=0;
	if (N<*vec.begin())
	{	cout<<"ch1"<<endl;
		cout<<-1<<endl;
		return;
	}
	else if (N>*(vec.end()-1))
	{	cout<<"ch1"<<endl;
		cout<<-1<<endl;
		return ;
	}
	int i=0;
	while (i<N)
	{
		if (flag==0)
		{	index=i;
			num=vec[i];
			flag=1;
			i++	;			
		}	
		else
		{
			num++;
			if (vec[i]!=num)
			{
				if (num<M)
				{
					flag=0;
				}
				else if (num==M)
				{
					cout<<N-index<<endl;
					return;
				}
				else
				{	cout<<"ch3"<<endl;
					cout<<-1<<endl;
					return;
				}
			}
			else
				i++;
		
		}
	}
	cout<<-1<<endl;
	return;
	
	
}







int main()
{
	int test_case;
	cin>>test_case;
	long long int M,N;
	vector<long long int> v;
	long long int temp;
	
	for (int i=0;i<test_case;i++)
	{
		cin>>N>>M;
		for (int k=0;k<N;k++)
		{
			cin>>temp;
			v.push_back(temp);		
		}

		fun1(v,N,M);
		v.clear();		
	}
	
	return 0;
}
