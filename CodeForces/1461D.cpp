#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
set<ll> s;

void fun2(ll l, ll h,vector<ll> &vec)
{
	ll mid=(vec[l]+vec[h])/2;
	
	ll ind=-1;
	ll sumi=0;
	for (ll i=l;i<=h;i++)
	{
		sumi+=vec[i];
		
		if(vec[i]<=mid)
		ind=i;	
	}
	s.insert(sumi);
	
	if (ind==-1 || ind==h)
	{
		return ;
	}
	
	fun2(l,ind,vec);
	fun2(ind+1,h,vec);
}


void fun()
{
	ll n ,q;
	cin>>n>>q;
	s.clear();
	vector<ll> vec;
	ll temp;
	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	
	sort(vec.begin(),vec.end());
	
	fun2(0,n-1,vec);
	//ll temp;
	for (int i=1;i<=q;i++)
	{
		cin>>temp;
		if (s.find(temp)!=s.end())
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
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

