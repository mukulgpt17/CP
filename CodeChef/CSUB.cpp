#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void fun1(long long int n,string temp)
{
	long long int count=0;
	long long int final=0;
	
	for (long long int i=n-1;i>=0;i--)
	{
		if (temp[i]=='1')
		{	
			final+=count+1;
			count++;
		}
	}
	cout<<final<<endl;
	return ;
}

int main()
{
	int test_case;
	cin>>test_case;
	long long int n;
	string temp;
	
	
	for (int i=0;i<test_case;i++)
	{
	
		cin>>n;
		cin>>temp;
		
		fun1(n,temp);
	}
	
	return 0;
}
