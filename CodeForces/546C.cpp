#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void fun()
{
	int n;
	cin>>n;
	
	queue<int> q1;
	queue<int> q2;
	
	int le;
	cin>>le;
	
	int tm;
	
	for (int i=1;i<=le;i++)
	{
		cin>>tm;
		q1.push(tm);
	}
	
	cin>>le;
	
	for (int i=1;i<=le;i++)
	{
		cin>>tm;
		q2.push(tm);
	}
	
	set<pair<queue<int>,queue<int>>> s;
//	s.push({q1.front(),q2.front()});
	ll count=0;
	
	while (q1.size()!=0 && q2.size()!=0)
	{
		count++;
		
		if (s.find({q1,q2})!=s.end())
		{
			cout<<-1<<endl;
			return ;
		}
		
		s.insert({q1,q2});
		
		if (q1.front()>q2.front())
		{
			ll t1=q1.front();
			ll t2=q2.front();
			
			q1.pop();
			q2.pop();
			q1.push(t2);
			q1.push(t1);	
		}
		else
		{
			ll t1=q1.front();
			ll t2=q2.front();
			
			q1.pop();
			q2.pop();
			q2.push(t1);
			q2.push(t2);
		}
		
	}
	
	cout<<count<<" ";
	if (q1.empty()==true)
	cout<<2<<endl;
	else
	cout<<1<<endl;


}

int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

