#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void fun1(unsigned long long int temp)
{
	if (temp==1)
	{
		cout<<0<<endl;
		return;
	}
	else if (temp%2!=0)
	{
		cout<<temp/2<<endl;
		return;
	}
	else
	{
		if (temp & (temp-1)==0)
		{
			cout<<0<<endl;
			return;
		}
		else
		{
			unsigned long long int count=0;
			unsigned long long int temp1=temp;
			while (temp1%2==0)
			{
				temp1=temp1/2;
				count++;
			}
			unsigned long long int number=pow(2,count+1);
			count=0;
			count=temp/number;
			cout<<count<<endl;
			return;
		}
	}
}

int main()
{
	unsigned long long int test_case;
	cin>>test_case;
	unsigned long long int temp;
	
	for (unsigned long long int i=0;i<test_case;i++)
	{
		cin>>temp;
		fun1(temp);	
	}
	return 0;
}
