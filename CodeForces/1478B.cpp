#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


// NOTE TO ADD INFO ABOUT THE LOGIC USING IN THE CODE 
/* 
	LUCKY NUMBER - CONTAINS ANY DIGIT (d) 
	EX: d,1d,2d,10d ETC
	
	FOR EACH Q :
	
	IF ai == SUM OF multiple(single also possible)  
	lucky numbers -> YES ELSE NO 
	
	ex: 27 (d=7) it itself if lucly 
		24 -> 7+17 
	d-(1..9) 
	
	any number>99 -> can be formed by lucky number 
	how ?? : for a lucky (d) (10*d ... 10*d+9) 
	all lucky number 
	
	ex(d=7) 70 ... 79 (lucky numbers) 
	so if any number greater then 100 :
	we can reduce it by 7 
	(i.e make it sum of 7(lots of 7's)) till it comes in 
	range (10*d + 10*d+9) and this number which we know is 
	lucky 
	And it has to reduce enough to lie in (70,79)
	as we are reducing by (7) which is less then 10 
	so it can skip this range(70,79)
	
	SO IF (ai) >=100 or(more strict)
	ai>10*d+9;
	 its always YES 
	
	Now if ai<10*d 
	
	if (e) is lucky & (j) is lucky 
	then e+k is also lucky 
*/
using namespace std;
bitset<100> arr[10];
void prep()
{
	for (int i=1;i<=9;i++)
	{
		arr[i][0]=1;
		for(int e=1;e<100;e++)
		{
			int d1=e/10;
			int d0=e%10;
			if(d1==i || d0==i)
			{
				// e is lucky number then 
				// any number(which is lucky) + e 
				// its also lucky 
				arr[i][e]=1;
				for (int j=1;j+e<100;j++)
				{
						
				arr[i][e+j]=arr[i][e+j]||arr[i][j];	
				}	
			}	
		}	
	}
		
}
void fun()
{
	prep();
	int q,d;
	cin>>q>>d;
	int temp;
	for (int i=1;i<=q;i++)
	{
		cin>>temp;
		if (temp>=10*d+d)
		{
			cout<<"YES"<<endl;
			continue;
		}
		if (arr[d][temp])
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	
	}
	
	
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

