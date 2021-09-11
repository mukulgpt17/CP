#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back




using namespace std;

void fun1()
{
	ll a,b;
	cin>>a>>b;
	
	if (a>b)
	{
		cout<<"NO"<<endl;
		return ;
	}
	if (a==b)
	{
		cout<<"YES"<<endl;
		return;
	}
	vll aa;
	vll bb;
	
	for(int i=0;i<30;i++)
	{	ll ai=a&(1<<i);
		if (ai!=0)
		{
			aa.pb(i);
		}
		ll bi=b&(1<<i);
		if (bi!=0)
		{
			bb.pb(i);
		}
	//	cout<<"check "<<i<<endl;
	}
	
	if (aa.size()<bb.size())
	{
		cout<<"NO"<<endl;
		return ;
	}	
	for (int i=0;i<bb.size();i++)
	{
		if (bb[i]<aa[i])
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	return ;
}

void fun()
{
	ll a,b;
	cin>>a>>b;
	
	if (a==b)
	{
		cout<<"YES"<<endl;
		return;
	}
	
	if (a>b)
	{
		cout<<"NO"<<endl;
		return ;
	}

	unordered_set<ll> s;
	priority_queue<ll,vector<ll> , greater<ll>> q;
	q.push(a);
	while (q.empty()!=true)
	{	
		ll top =q.top();
	//	cout<<top<<":-> ";
		q.pop();
		s.insert(top);
		ll in=1;
		if (top==b)
		{
			cout<<"YES"<<endl;
			return;
		}
		if (top>b)
		{
			cout<<"NO"<<endl;
			return;
		}
		while (in<=top)
		{	//cout<<in<<" ";
			ll tt=top&in;
			if (tt==in)
			{	if(s.find(top+in)==s.end())
				q.push(top+in);
				
			}	
			in=in<<1;
		}
	//	cout<<endl;
	}
	cout<<"NO"<<endl;
	return;
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun1();
	}
	

 return 0;
}

