#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void fun1(long long int A,int N,int K)
{
	long long int m=N+1;
	long long int rem;
	int arr[K]={0};
	int count=0;
	while (A/m>0)
	{
		m=m*(N+1);
		count++;
	}
	m=m/(N+1);
	arr[count]=A/m;
	rem=A%m;
	
	for (int i=count-1;i>=0;i--)
	{
		m=m/(N+1);
		if (rem/m>0)
		{
			arr[i]=rem/m;
			rem=rem%m;
		}
	}
	
	for (int i=0;i<K;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
}






int main(){
	

	int N;
	int K;
	long long int A;
	

		cin>>A;
		cin>>N;
		cin>>K;
		
		fun1(A,N,K);
		

	return 0;
	
}

