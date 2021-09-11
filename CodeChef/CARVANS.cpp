#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void func1(vector<int> vect,int size)
{
	int min=vect[0];
	int count=0;
	for (auto i=vect.begin();i<vect.end();i++)
	{
		if (*i<=min)
		{
			count++;
			if (*i<min)
			{
				min=*i;
			}
		}
	}
	cout<<count<<endl;
}
int main()
{
	int test_case;
	int number;
	int temp;
	vector<int> vect;
	cin>>test_case;
	for (int i =0;i<test_case;i++)
	{
		cin>>number;
		for (int m=0;m<number;m++)
		{	cin>>temp;
			vect.push_back(temp);
		}
		func1(vect,number);
		vect.clear();
	}
return 0;
}
