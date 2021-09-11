#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void fun1(vector<int> vect,int notes,int money)
{
	sort(vect.begin(),vect.end());
	int diff=money;
	int index=0;
	for (int i=0;i<notes;i++)
	{
		if (money>=vect[notes-1-i])
		{
			index=notes-1-i;
			break;
		}
	}
	
	for (int k=index;k>=0;k--)
	{	diff=money;
	
		for (int m=k;m>=0;m--)
		{	if (diff-vect[m]==0)
			{
				diff=0;
				break;
			}
			else if  (diff-vect[m]>0)
			{
				diff=diff-vect[m];		
			}		
		}
		if (diff==0)
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
}
