#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void fun1(unsigned long long int number)
{
	if (number%2==0)
	{
		for (unsigned long long int  i=0;i<number;i++)
		{
			if (i%2==0)
			{
				for (unsigned long long int  k=1;k<=number;k++)
				{
					cout<<i*number+k<<" ";
				}
				cout<<endl;
			}
			
			else
			{
				for (unsigned long long int  k=number;k>=1;k--)
				{
					cout<<i*number+k<<" ";	
				}	
				cout<<endl;
			}
		}
	}
	else
	{
		for (unsigned long long int  i=0;i<number;i++)
		{
			for (unsigned long long int  k=1;k<=number;k++)
			{
				cout<<number*i+k<<" ";
			}
			cout<<endl;
		}
	}
	return;
}

int  main()
{
	unsigned long long int  test_case;
	cin>>test_case;
	unsigned long long int  number;
	
	for (unsigned long long int  i=0;i<test_case;i++)
	{
		cin >>number;
		fun1(number);
	}
	return 0;
}
