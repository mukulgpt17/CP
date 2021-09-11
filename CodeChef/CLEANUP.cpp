#include<bits/stdc++.h>
#include<iostream>
 using namespace std;

	
int main()
{
	int test_case;
	cin>>test_case;
	int mArr[test_case];
	int nArr[test_case];
	vector<int> input[test_case];
	int temp;
	vector <int> cook;
	vector <int> assis;
	int cookflag=1;
	
	
	
	for (int i=0;i<test_case;i++)
	{
		cin>>nArr[i];
		cin>>mArr[i];
		
		for (int m=0;m<mArr[i];m++)
		{
			cin>>temp;
			input[i].push_back(temp);
		}	
	}	
	
	for (int i=0;i<test_case;i++)
	{
		vector<int> test=input[i];
		int m=mArr[i];
		int n=nArr[i];
		cookflag=1;
		if (n==0)
		{cout<<endl;
		 cout<<endl;
		 continue ;
		}
		else if (m==0)
		{
			for (int k=1;k<=n;k++)
			{
				
			}
			
		}
		else
		{
			for (int k=1;k<=n;k++)
			{
				if (find(test.begin(),test.end(),k)!=test.end())
					continue;
				else
				{
					if (cookflag==1)
					{
						cook.push_back(k);
						cookflag=0;
					}	
					else
					{
						assis.push_back(k);
						cookflag=1;
					}
				}	
			}
			
			for (auto i=cook.begin();i<cook.end();i++)
				cout<<*i<<" ";
			cout<<endl;
			cook.clear();
			for (auto i=assis.begin();i<assis.end();i++)
				cout<<*i<<" ";
			cout<<endl;
			assis.clear();	
		}
	}
return 0;
}
