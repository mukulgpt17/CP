#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int jhony(vector<int> vect,int index)
{	int temp=1;
	int number=vect[index-1];
	sort(vect.begin(),vect.end());
	for (auto i=vect.begin();i<vect.end();i++)
	{
		if (*i==number)
			return temp;
		else
			temp++;
	}
	return temp;
	
}

int main()
{
	vector<int> vect;
	vector<int> final;
	
	int test_case;
	cin>>test_case;
	int  test_len;
	int number;
	int index;
	
	while (test_case!=0)
	{
		cin>>test_len;
		while (test_len!=0)
		{
			cin>>number;
			vect.push_back(number);
			test_len--;
		}
		cin>>index;
		number=jhony(vect,index);
		final.push_back(number);
		vect.clear();
		test_case--;	
	}
	
	for (auto &i:final)
		cout<<i<<endl;
	return 0;
}
