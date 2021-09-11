#include<bits/stdc++.h>
using namespace std;

void fun2(multiset<long long> &subset, multiset<long long> & ms,long long temp)
{
	ms.erase(ms.find(temp));
	multiset<long long > temp1;
	temp1.insert(temp);
	for (auto k:subset)
	{
		ms.erase(ms.find(k+temp));
		temp1.insert(k+temp);
	}
    
    for (auto k:temp1)
    {
        subset.insert(k);
    }
    
}


void fun()
{
	int n;
	cin>>n;
	
	vector<long long> answer;
	multiset<long long> ms;
	long long  temp;
	
	for (int i=0;i<(int)pow(2,n);i++)
	{
		cin>>temp;
		ms.insert(temp);		
	}

	ms.erase(ms.find(0));
	temp= *(ms.begin());
	answer.push_back(temp);
	
	ms.erase(ms.find(temp));
    multiset<long long> subset;
    subset.insert(temp);
	for(int i=1;i<n;i++)
	{
		temp=*(ms.begin());
		answer.push_back(temp);
		fun2(subset,ms,temp);
	}
	
	for (int i=0;i<answer.size();i++)
	{
		cout<<answer[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int t ;
	cin>>t;
	
	while (t--)
	{
		fun();
	}
 return 0;
}


