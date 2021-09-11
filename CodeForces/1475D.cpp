#include<bits/stdc++.h>
#define ull unsigned long long int
#define vll vector<long long> 
#define ll long long
#define pb push_back
using namespace std;

void fun()
{
	vll a;
	vll b;
	vll c;
	vll d;
	int n,m;
	cin>>n>>m;
	
	ll temp;
	ll temp1;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		c.pb(temp);
	}
	for (int i=1;i<=n;i++)
	{
		cin>>temp1;
		d.pb(temp1);
	}
	
	for (int i=1;i<=n;i++)
	{
		
		if (d[i-1]==1)
		{
			a.pb(c[i-1]);
		}
		else
		{
			b.pb(c[i-1]);
		}
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());		
		
	vll pf_a;
	vll pf_b;

	pf_a.pb(0);
	pf_b.pb(0);

	for (auto i:a)
	{
		pf_a.pb(pf_a.back()+i);
	}
	for (auto i:b)
	{
		pf_b.pb(pf_b.back()+i);
	}

	ll mini=1e9;
	
	for (int i=0;i<pf_a.size();i++)
	{
		ll diff=m-pf_a[i];
		if (pf_b.back()<diff)continue;
		ll in=lower_bound(pf_b.begin(),pf_b.end(),diff)-pf_b.begin();
		
		ll ans=i+2*in;
		mini=min(ans,mini);
	}
			
			
	if (mini==1e9)
	cout<<-1<<endl;
	else
	cout<<mini<<endl;
	
	return ;
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}

	vector<int> a;
	a.pb(1);
	a.pb(2);
	a.pb(3);
	sort(a.begin(),a.end());
	

 return 0;
}

/*
5 3 2 1 4
2 1 1 2 1
*/



