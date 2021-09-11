#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back




using namespace std;

void fun()
{
	ll n;
	cin>>n;
	
	
	ll in;
	ll temp;
	

	cout<<"? "<<1<<" "<<n<<endl; // q1
	cout.flush();
	cin>>in;
	
	if (n==2)
	{
		if(in==1)
		{
			cout<<"! "<<2<<endl;
			return;
		}
		else
		{
			cout<<"! "<<1<<endl;
			return ;
		}
	}
	
	if(in!=1)
	{
	cout<<"? "<<1<<" "<<in<<endl;//q2
	cout.flush(); 
	cin>>temp;
	}
	if (temp!=in || in==1) // right 
	{
		ll low=in+1;
		ll high=n;
		//cout<<"Right"<<endl;
		while (low<=high)
		{
			if (low==high)
			{//	cout.flush();
				cout<<"! "<<low<<endl;
				return ;
			}
			if (high-low==1)
			{
				
			
				cout<<"? "<<in<<" "<<low<<endl;
					cout.flush();
				cin>>temp;
				if (temp==in)
				{
					cout<<"! "<<low<<endl;
					return ;
				}
				else
				{
					cout<<"! "<<high<<endl;
					return ;
				}
			}
			
			ll mid=(low+high)/2;
		
			cout<<"? "<<in<<" "<<mid<<endl;	cout.flush();
			cin>>temp;
			
			if (temp==in)
			high=mid;
			else
			low=mid+1;
		}
		return ;
	}
	else
	{//	cout<<"left"<<endl;
		ll low=1;
		
		ll high=in-1;
		
		while (low<=high)
		{
			if (low==high)
			{	
				cout<<"! "<<low<<endl;
				return ;
			}
			if (high-low==1)
			{
			
				cout<<"? "<<high<<" "<<in<<endl;	cout.flush();
				cin>>temp;
				if (temp==in)
				{
					cout<<"! "<<high<<endl;
					return ;
				}
				else
				{
					cout<<"! "<<low<<endl;
					return ;
				}
				
			}
			
			ll mid=(low+high)/2;
		
			cout<<"? "<<mid<<" "<<in<<endl;	cout.flush();
			cin>>temp;
			
			if (temp==in)
			{
				low=mid;
			}
			else
			{
				high=mid-1;
			}
		}	
		
		return ;
	}
}
int main()
{
	int t=1;
	while (t--)
	{
	 fun();
	}
 return 0;
}

