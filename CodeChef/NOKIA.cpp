#include<bits/stdc++.h>
// NOT SOLVED 
using namespace std;

	
unordered_map<int,vector<int>> mp;

void fun()
{	
	vector<int> ar[31];
	
	vector<int> temp;
	temp.push_back(0);
	ar[0]=temp;
	
	vector<int> temp1;
	temp1.push_back(2);
	ar[1]=temp1;
	
	vector<int> temp2;
	temp2.push_back(5);
	ar[2]=temp2;
	for (int i=3;i<=30;i++)
	{
		vector<int> answer;
		for (int j=1;j<=i;j++)
		{
			vector<int> left;
			vector<int> right;
			cout<<i<<" "<<j<<endl;
			left=ar[j-1];
			right=ar[i-j];
			
			
			for (int l=0;l<left.size();l++)
			{	int co=left[l];
				for (int r=0;r<right.size();r++)
				{
					answer.push_back(co+right[r]);	
				}	
			}
			
		}
		ar[i]=answer;
	}
	
	int t;
	cin>>t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		
		vector<int> te=ar[n];
		int diff=INT_MAX;
		int flag=-1;
		for (int i=0;i<te.size();i++)
		{
			if (te[i]<=m)
			{
				diff=min(diff,m-te[i]);
				flag=0;	
			}	
		}
		cout<<diff<<endl;		
	}
	
	
	
	
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	fun();
   	return 0;
	
}
