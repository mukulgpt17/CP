#include<bits/stdc++.h>
using namespace std;


bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
	int t;
	cin>>t;
	
	while (t--)
	{	vector<int> v1{1,3,2};
		vector<int> v2{2,3,1,5,4};
		int n;
		cin>>n;
		if (isPowerOfTwo(n))
		cout<<-1<<endl;
		else
		{
			if (n>5)
			{
				int i=6;
				while (i<=n)
				{
					if (isPowerOfTwo(i))
					{
						v2.push_back(i+1);
						v2.push_back(i);
						i+=2;
					}
					else
					{
						v2.push_back(i);
						i++;
					}
				}
				for (int i:v2)
				cout<<i<<" ";
				cout<<endl;
			}
			else
			{
				if (n==3)
				{
					for (int i:v1)
					cout<<i<<" ";
					cout<<endl;
				}
				else if (n==5)
				{
					for (int i:v2)
					cout<<i<<" ";
					cout<<endl;
				}
			}
		}
	}
	return 0;
}
