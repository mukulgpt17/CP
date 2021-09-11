#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t ;
	cin>>t;
	while (t--)
	{
		
		int n;
		cin>>n;
		set<int> s;
		for (int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			s.insert(temp);
		}
		
		int count=0;
		while (s.size()>1)
		{
			int back=*(s.rbegin());
			int front=*(s.begin());
			s.erase(back);
			int back1=*(s.rbegin());
			if (front>=1 && front<=(back-back1))
				count++;
			else
			{
				s.insert(1);
				count++;
			}
		}
		cout<<count+1<<endl;
		
	}
	return 0;
}
