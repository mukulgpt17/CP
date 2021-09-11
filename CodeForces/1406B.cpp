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
ll n ;
cin>>n; 
vector<ll> po;
vector<ll> ne;



ll t;
for (int i=0;i<n;i++)
{
	cin>>t;
	if (t>=0)
	{
		po.pb(t);
	}
	else
	{
		ne.pb(t);
	}
}

sort(po.begin(),po.end(),greater<int>());
if (po.size()==0)
{
	sort(ne.begin(),ne.end(),greater<int>());
	ll maxi=1;
	for (int i=0;i<5;i++)
	{
		maxi=maxi*ne[i];
	}
	cout<<maxi<<endl;
	return ;
}

sort(ne.begin(),ne.end());


ll maxi=-922337203654775808;
ll po_si=po.size();
for(int i=0;i<min(1ll*5,po_si);i++)
{
	if (i!=0)
	{
		po[i]=po[i-1]*po[i];
	}
}

ll ne_si=ne.size();
for(int i=0;i<min(1ll*5,ne_si);i++)
{
	if (i!=0)
	{
		ne[i]=ne[i-1]*ne[i];
	}
}


if (ne.size()>=5)
{
	// po==0
	
	maxi=ne[4];
}//cout<<po.size()<<endl;
//cout<<ne.size()<<endl;


for(int i=1;i<5;i++)
{
	if (i<=po.size() && 5-i<=ne.size())
	{	
		maxi=max(po[i-1]*ne[5-i-1],maxi);
	}
}

if (po.size()>=5)
{
	maxi=max(maxi,po[4]);
}

if (po.size()+ne.size()==5 && po.size()!=0 && ne.size()!=0)
{
	maxi=max(maxi,po[po.size()-1]*ne[ne.size()-1]);
}

cout<<maxi<<endl;

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

