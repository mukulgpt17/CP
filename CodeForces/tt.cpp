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

ll a,b,n;
	cin>>n>>a>>b;
	set<ll> s;

	s.insert(1);
	priority_queue<int, vector<int>, greater<int> >q;

	q.push(1);

	while(q.size()>0 && *(s.rbegin())<n)
	{

		ll te=q.top();
		q.pop();
//		cout<<te<<endl;
		ll t1=te+b;
		ll t2=te*a;

		if (t1==n || t2==n)
		{
			cout<<"Yes"<<endl;
			return ;
		}

		if (s.find(t1)==s.end() && t1<n)
		{
			s.insert(t1);
			q.push(t1);
		}

		if (s.find(t2)==s.end() && t2<n)
			{
				s.insert(t2);
				q.push(t2);
			}
	}


	cout<<"No"<<endl;
	return ;

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

