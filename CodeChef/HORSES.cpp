#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int func1(vector<int> vect)
{
	sort(vect.begin(),vect.end());
	int min=INT_MAX;
	for (auto i=vect.begin()+1;i<vect.end();i++)
	{
		if ((*i)-*(i-1)<min)
		{
		
			min=(*i)-*(i-1);
		}
	}
	return min;
}


int main()
{
	vector <int> vect;
	vector <int> final;
	int test_case;
	cin>>test_case;
	int test_len;
	int number;
	while (test_case!=0)
	{
		cin>>test_len;
		while (test_len!=0)
		{
			cin>>number;
			vect.push_back(number);
			test_len--;
		}
		number=func1(vect);
		vect.clear();
		final.push_back(number);
		test_case--;	
	}
	for (auto &i:final)
	{
		cout<<i<<" ";
	}
	return 0;
}
