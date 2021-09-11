#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;


bool checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
       return true;
    }
    else {
       return false;
    }
}
int si=1e7+1;
int arr[(int)(1e7+1)];

void fun()
{
	int n,k;
	cin>>n>>k;
	
	vector<int>  a(n,1);
	ll x;
	for (int i=0;i<n;i++)
	{
		
		cin>>x;
		ll prev=1 ;
		ll count=0;
		while (x>1)
		{
			if (arr[x]==-1)
			{
				
				if (x==prev)
				{
					count++;
					if (count%2)
					a[i]=a[i]*prev;
				}
				else
				{
				if(count%2)
				a[i]=a[i]*prev;
				a[i]=a[i]*x;	
				}
				x=x/x;
			}
			else
			{
				if(arr[x]!=prev)
				{
					if (count%2)
					{
						a[i]=a[i]*prev;
						
					}
					prev=arr[x];
					count=1;
				}
				else
				{
					count++;
					
				}
				x=x/arr[x];
			}	
		}
	}
	
//	for(int i=0;i<n;i++)cout<<a[i]<<" ";
//	cout<<endl;
	
	ll ans=1;
	ll L=0;
	map<int,int> mp;
	
	for(int i=0;i<n;i++)
	{
		if(mp.find(a[i])!=mp.end() && mp[a[i]]>=L)
		{
			ans++;
			L=i;
		}
		mp[a[i]]=i;
	}
	
	cout<<ans<<endl;
}

int main()
{
	memset(arr,-1,sizeof(arr));
	//-1 then its prime 
	
	for (int i=2;i*i<=si;i++)
	{	if (arr[i]==-1)
		{
		// -1 is prime number 
			for (int j=i*i;j<=si;j+=i)
			{
				 if(arr[j]==-1)
				 {
				 	arr[j]=i;
				 }
			}
		}
	}
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
	
 return 0;
}

