#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	int t;
	cin>>t;
	while (t--)
	{
		
		int N,K,X,Y;
		cin>>N>>K>>X>>Y;
		if (K==0)
		{
			if (X==Y)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		continue;
		}
		if (X==Y)
		{
			cout<<"YES"<<endl;
			continue;
		}
		if (__gcd(N,K)==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			int x=X+1;
			int y=Y+1;
			if (x>y)
			{
				if ((N-x+y)%K==0)
				cout<<"YES"<<endl;
				else
				cout<<"NO"<<endl;
			}
				
		}
	}
	
		return 0;
	
}
