#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

void solve()
{
  
	ll a,b,n;
	cin>>n>>a>>b;
	set<ll> s;

	s.insert(1);
	priority_queue<int, vector<int>, greater<int> >q;

	q.push(1);

	while(q.top()<n)
	{

		ll te=q.top();
		q.pop();

		ll t1=te+b;
		ll t2=te*a;

		if (t1==n || t2==n)
		{
			cout<<"Yes"<<endl;
			return ;
		}

		if (s.find(t1)!=s.end() && t1<n)
		{
			s.insert(t1);
			q.push(t1);
		}

		if (s.find(t2)!=s.end() && t2<n)
			{
				s.insert(t2);
				q.push(t2);
			}
	}


	cout<<"No"<<endl;
	return ;
  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;
    cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
