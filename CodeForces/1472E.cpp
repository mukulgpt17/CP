#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
using namespace std;

ll ans[200001];

struct person
{
	ll h;
	ll w;
	ll i;
	
	person(ll hh,ll ww,ll ii )
	{
		h=hh;
		w=ww;
		i=ii;
	}
};
bool comp(person a,person b)
{
	if (a.h*a.w <b.h*b.w)
	return true;
	else
	return false;

}


void fun()
{
	memset(ans,-1,sizeof(ans));
	vector<person> vc;
	ll n ;
	cin>>n;
	ll a ,b;
	for(ll i=1;i<=n;i++)
	{
		cin>>a>>b;
		vc.pb(person(a,b,i));
	}
	
	sort(vc.begin(),vc.end(),comp);
/*	for (auto i=vc.begin();i!=vc.end();i++)
	{
		cout<<i->h<<" "<<i->w<<" "<<i->i<<endl;
	}
*/		
	for (int i=1;i<vc.size();i++)
	{	int flag=0;
	
		for (int j=i-1;j>=0;j--)
		{
			if (vc[j].h*vc[j].w < vc[i].h*vc[i].w)
			{
				if ((vc[j].h < vc[i].h && vc[j].w < vc[i].w)|| (vc[j].w < vc[i].h && vc[j].h < vc[i].w))
				{
					ans[vc[i].i]=(vc[j].i);
					flag=1;
					break;	
				}		
			}	
		}
		
	}
	
	
	for (auto i=1;i<=n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

