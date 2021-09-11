#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define loop(i,a,b) for (int i=a;i<b;i++)
#define loopb(i,a,b) for (int i=a;i>=b;i--)

//NOT SOLVED

using namespace std;

ll arr[100005];
ll nxt[100005];
ll pos[100005];

/*
void fun()
{
	ll n ;
	cin>>n;
	ll temp;
	arr[0]=0;
	loop(i,1,n+1)
	{
		cin>>temp;
		arr[i]=temp;
	}
	// postions of all values are intirally at n+1;
	loop(i,1,n+1)
	{
		pos[i]=n+1;
	}
	
	loopb(i,n,1)
	{
		// nxt : what is index of next same value which is on curr index 
		nxt[i]=pos[arr[i]];
		pos[arr[i]]=i;
	}
	
//	loop(i,1,n+1)
//	cout<<nxt[i]<<" ";
//	cout<<endl;
	ll x=0; // consider it as index 
	ll y=0;
	
	vll a0;
	vll a1;
	a0.pb(0); // x
	a1.pb(0); // y
	//cout<<"start"<<endl;
	for (int i=1;i<=n;i++)
	{	//cout<<i<<" "<<x<<" "<<y<<endl;
		if (arr[x]==arr[y])
		{
			a1.pb(arr[i]);
			y=i;
		}
		else if(arr[i]==arr[x] && arr[i]!=arr[y])
		{
			a1.pb(arr[i]);
			y=i;
		}
		else if(arr[i]!=arr[x] && arr[i]==arr[y])
		{
			a0.pb(arr[i]);
			x=i;
		}
		else if (arr[i]!=arr[x]&& arr[i]!=arr[y])
		{
			ll ax=nxt[x];
			ll bx=nxt[y];
		//	cout<< "!!" <<ax<<" "<<bx<<endl;
			if (ax<bx)
			{
				a0.pb(arr[i]);
				x=i;
			}
			else
			{
				a1.pb(arr[i]);
				y=i;
			}
		}	
	}
	/*
	loop(i,0,a0.size())
	cout<<a0[i]<<" ";
	cout<<endl;
	
	loop(i,0,a1.size())
	cout<<a1[i]<<" ";
	cout<<endl;

	
	ll ans=0;
	loop(i,1,a0.size())

	{
		if (a0[i]!=a0[i-1])
		ans++;
	}

	loop(i,1,a1.size())
	{
		if (a1[i]!=a1[i-1])
		ans++;
	}
	
   cout<<ans<<endl;
	return;


}*/
//arr nxt pos 

void fun1()
{
	ll n;
	cin>>n;
	vector<ll> v1;
	vector<ll> v2;
	
	vector<ll> ip;
	ll temp;
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		ip.pb(temp);
	}
	
	for(int i=0;i<=n;i++)
	{
		pos[i]=n+1;
	}
	
	for (int i=n-1;i>=0;i--)
	{
		ll po=ip[i];
		nxt[i]=pos[po];
		pos[po]=i;
	}
	
	v1.pb(0);
	for(int i=1;i<n;i++)
	{
		
		if (ip[v1[v1.size()-1]]==ip[i])
		{
			v2.pb(i);
			continue;
		}
		if (v2.size()!=0 && ip[v2[v2.size()-1]]==ip[i])
		{
			v1.pb(i);
			continue;		
		}
		ll n1=n+1;
		ll n2=n+1;		
		 n1=nxt[v1[v1.size()-1]];
		if (v2.size()!=0)
		 n2=nxt[v2[v2.size()-1]];
		
		if (n1<=n2)
		{
			v1.pb(i);
			continue;	
			
		}
		else
		{
			v2.pb(i);
			continue;
		}
	}
	ll count=0;
	if (v1.size()!=0)
	{
		count++;
	}
	for (int i=1;i<v1.size();i++)
	{
		if (ip[v1[i]]!=ip[v1[i-1]])
		count++;
	}
	if (v2.size()!=0)
	{
		count++;
	}
	for (int i=1;i<v2.size();i++)
	{
		if (ip[v2[i]]!=ip[v2[i-1]])
		count++;
	}
	
	cout<<count<<endl;
}






int main()
{
	int t=1;
	while (t--)
	{
	 fun1();
	}
 return 0;
}

