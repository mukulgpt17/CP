#include<bits/stdc++.h>


using namespace std;
 

void fun1(unsigned long long int  &k,unsigned long long  int &copy,unsigned long long  int count)
{
	unsigned long long  int  si=floor(log10(copy))+1;
	int a1=copy/(pow(10,si-1));
	int a2=copy%10;
	if (a1==a2)
	{
		copy=copy-a1*(pow(10,si-1));
		copy=copy/10;	
		return ;
	}
	int m=(int)max(a1,a2);
	if (m!=a1)
	{
		k=k+abs(m-a1)*(pow(10,si-1+count));
	}
	else
		k=k+abs(m-a2)*(pow(10,count));
	
	copy=copy-a1*(pow(10,si-1));
	copy=copy/10;
}



int main()
{
	unsigned long long  int k;
	cin>>k;
	unsigned long long int size=floor(log10(k))+1;
	unsigned long long int copy=k;
	for (unsigned long long  int  i=0;i<ceil(size/2);i++)
	{
		fun1(k,copy,i);
	}
	cout<<k<<endl;
	return 0;
	
}
