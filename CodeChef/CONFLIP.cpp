#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void fun1(int a,int b,int c)
{
	if (a=1)
	{
		if (b%2==0)
		{
			cout<<b/2<<endl;
			return;
		}
		else
		{
			if (c!=a)
			{
				cout<<b/2<<endl;
				return;
			}
			else
			{
				cout<<b-b/2<<endl;
				return ;
			}
		}
	}
	else
	{
		if (b%2==0)
		{
			cout<<b/2<<endl;
			return;
		}
		else
		{
			if (c!=a)
			{
				cout<<b/2<<endl;
				return;
			}
			else
			{
				cout<<b-b/2<<endl;
				return ;
			}
		}
	}
}

int main()
{
	int test_case;
	cin>>test_case;
	int games;
	int a,b,c;
	
	for (int i=0;i<test_case;i++)
	{
		cin>>games;
		for (int m=0;m<games;m++)
		{
			cin>>a;
			cin>>b;
			cin>>c;
			
			fun1(a,b,c);
		}
	}
	return 0;
}
