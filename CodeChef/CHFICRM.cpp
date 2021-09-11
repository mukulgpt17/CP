#include<bits/stdc++.h>
#include<queue>
#include<unordered_map>
using namespace std;
void fun1(vector<int>  vect, int number )
{
	
	unordered_map<int,int> data;
	data[5]=0;
	data[10]=0;
	data[15]=0;
	
	for (int i=0;i<number;i++)
	{
		if (vect[i]==5)
		{
			data[5]++;
		}
		else if (vect[i]==10)
		{
			if (data[5]>0)
			{
				data[5]--;
				data[10]++;
			}
			else
			{
				cout<<"NO"<<endl;
				return;
			}
		}
		else
		{
			if (data[10]>0)
			{
				data[10]--;
				data[15]++;
			}
			else if (data[5]>=2)
			{
				data[5]=data[5]-2;
				data[15]++;
			}
			else
			{
				cout<<"NO"<<endl;
				return;
			}
			
		}
	}
	cout<<"YES"<<endl;
	
	return;
	
}

int main()
{
	int test_case;
	cin>>test_case;
	int number;
	int temp;
	vector <int> vect;
	
	for (int i=0;i<test_case;i++)
	{
		cin>>number;
		for(int k=0;k<number;k++)
		{
			cin>>temp;
			vect.push_back(temp);	
		}
		fun1(vect,number);
		vect.clear();
	}
	return 0;
}
