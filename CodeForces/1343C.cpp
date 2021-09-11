#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;

void solve()
{
	ll n;
	cin>>n;
	
	vector<ll> ve(n);
	
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}
	
	ll len=0;
	ll curr=0;
	ll flag=1;
	for (int i=0;i<ve.size();i++)
	{
		if(flag==1 && ve[i]<0)
		{
			curr++;
			flag=0;
		}
		else if (flag==0 && ve[i]>0)
		{
			curr++;
			flag=1;
		}
	}
	
	ll curr1=0;
	flag=1;
	
	for(int i=0;i<ve.size();i++)
	{
		if(flag==1 && ve[i]>0)
		{
			curr1++;
			flag=0;
		}
		else if (flag==0 && ve[i]<0)
		{
			curr1++;
			flag=1;
		}
	}

	if (curr1>curr)
	{
		// pos 
		
		flag=1;
		ll ans=0;
		ll curr=0;
//		cout<<"pos"<<endl;
		for (int i=0;i<ve.size();i++)
		{
			if (flag==1 && ve[i]>0)
			{
				if (curr==0)
				curr=ve[i];
				else
				curr=max(ve[i],curr);
			}	
			else if (flag==1 && ve[i]<0)
			{
				ans+=curr;
				curr=ve[i];
				flag=0;	
			}	
			else if (flag==0 && ve[i]<0)
			{
				if (curr==0)
				curr=ve[i];
				else 
				curr=max(curr,ve[i]);
			}
			else if (flag==0 && ve[i]>0)
			{
				ans+=curr;
				curr=ve[i];
				flag=1;
			}
		}
		ans+=curr;
		cout<<ans<<endl;	
			
	}
	else if (curr>curr1)
	{
		// negf
//			cout<<"negative"<<endl;
		flag=1;
		ll ans=0;
		ll curr=0;
		
			for (int i=0;i<ve.size();i++)
		{
			if (flag==1 && ve[i]<0)
			{
				if (curr==0)
				curr=ve[i];
				else
				curr=max(ve[i],curr);
			}	
			else if (flag==1 && ve[i]>0)
			{
				ans+=curr;
				curr=ve[i];
				flag=0;	
			}	
			else if (flag==0 && ve[i]>0)
			{
				if (curr==0)
				curr=ve[i];
				else 
				curr=max(curr,ve[i]);
			}
			else if (flag==0 && ve[i]<0)
			{
				ans+=curr;
				curr=ve[i];
				flag=1;
			}
		}
		ans+=curr;
		cout<<ans<<endl;
	}
	else
	{
		// eql try with both 
		ll fin=0;
			
		flag=1;
		ll ans=0;
		ll curr=0;
//		cout<<"pos"<<endl;
		for (int i=0;i<ve.size();i++)
		{
			if (flag==1 && ve[i]>0)
			{
				if (curr==0)
				curr=ve[i];
				else
				curr=max(ve[i],curr);
			}	
			else if (flag==1 && ve[i]<0)
			{
				ans+=curr;
				curr=ve[i];
				flag=0;	
			}	
			else if (flag==0 && ve[i]<0)
			{
				if (curr==0)
				curr=ve[i];
				else 
				curr=max(curr,ve[i]);
			}
			else if (flag==0 && ve[i]>0)
			{
				ans+=curr;
				curr=ve[i];
				flag=1;
			}
		}
		
		fin=max(fin,ans);
		flag=1;
		ans=0;
		curr=0;
		
		
			for (int i=0;i<ve.size();i++)
		{
			if (flag==1 && ve[i]<0)
			{
				if (curr==0)
				curr=ve[i];
				else
				curr=max(ve[i],curr);
			}	
			else if (flag==1 && ve[i]>0)
			{
				ans+=curr;
				curr=ve[i];
				flag=0;	
			}	
			else if (flag==0 && ve[i]>0)
			{
				if (curr==0)
				curr=ve[i];
				else 
				curr=max(curr,ve[i]);
			}
			else if (flag==0 && ve[i]<0)
			{
				ans+=curr;
				curr=ve[i];
				flag=1;
			}
		}
		ans+=curr;
		fin=max(fin,ans);
		cout<<ans<<endl;
		
	}
}


int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

