#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int fun1 (int number,unordered_map<int,int> data)
{  /* if (number==1 || number==0)
        return number;
        */
    int sum=0;
    int X1;
    int X2;
    int X3;
	
	if (data.find(number/2)!=data.end())
    	X1=data[number/2];
    else
    {
    	 X1=fun1(number/2,data);
    	data[number/2]=X1;
	}
    if (X1==-1)
        sum+=number/2;
    else
        sum+=X1;
        
        
    
	if (data.find(number/3)!=data.end())
    	X2=data[number/3];
    else
    {
    	 X2=fun1(number/3,data);
    	data[number/3]=X2;
	}
        
    if (X2==-1)
        sum+=number/3;
    else
        sum+=X2;
    
    
    
    
	if (data.find(number/4)!=data.end())
    	 X3=data[number/4];
    else
    {
    	 X3=fun1(number/4,data);
    	data[number/4]=X3;
	}
    
    
    if (X3==-1)
        sum+=number/4;
    else
        sum+=X3;
    
    if (sum>number)
        return sum;
    else 
        return -1;
    
}


int main() {
	int temp;
	int val;
	unordered_map<int,int> data;
	data[0]=0;
	data[1]=1;
	
	
	while (cin>>temp)
	{
	    val=fun1(temp,data);
	    if (val==-1)
	        cout<<temp<<endl;
	    else 
	        cout<<val<<endl;
	}
	
	return 0;
}

