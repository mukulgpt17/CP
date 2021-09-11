#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void fun1(vector<int> vect,int notes,int money)
{	int sum;
    int num;
	for (int i=1;i<pow(2,notes);i++)
	{
		sum=0;
		num=i;
		for (int j=0;j<notes;j++)
		{
			if (num&1==1)
			   sum += vect[j];
			num=num>>1;
		}
		if (sum==money)
		{
			cout<<"Yes"<<endl;
			return ;
		}
	}
	cout<<"No"<<endl;
	return;
}

int main()
{
	int test_case;
	cin>>test_case;
	vector<int> vect;
	int temp;
	int money;
	int notes;
	
	for (int i =0;i<test_case;i++)
	{
		cin>>notes;
		cin>>money;
		
		for (int k=0;k<notes;k++)
		{
			cin>>temp;
			vect.push_back(temp);
		} 
		fun1(vect,notes,money);
		vect.clear();
	}
return 0;
}
