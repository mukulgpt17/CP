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
	int n,k;
	cin>>n>>k;
	
	vector<int> final;
	vector<int> a;
	vector<int> b;
	int t1,t2,t3;
	for (int i=1;i<=n;i++)
	{
		cin>>t1>>t2>>t3;
//		cout<<t1<<t2<<t3<<endl;
		if (t2==1 && t3==1)
		{
			final.pb(t1);
		}
		else if (t2==0 && t3==1)
		{
			b.pb(t1);
		}
		else if (t2==1 && t3==0)
		{
			a.pb(t1);
		}
	}
	
	
	
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	for (int i=0;i<min(a.size(),b.size());i++)
	{
		final.pb(a[i]+b[i]);
	}
	sort(final.begin(),final.end());

	if (final.size()<k)
	{
		cout<<-1<<endl;
	}
	else
	{
		int answer=0;
		for(int i=0;i<k;i++)
		{
			answer+=final[i];
		}
		cout<<answer<<endl;
	}
}

int main()
{
	int t=1;
//	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

