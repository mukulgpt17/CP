#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back


ll arr[200009];
ll sumi[200009];
using namespace std;
void fun()
{
	ll n,m;
	cin>>n>>m;	
	ll index=0;
	ll maxi=INT_MIN;
	vll ip;
	ll temp;
	sumi[0]=0;
	
	vector<pair<ll,ll>> vec;
	ll prev=0;
	

	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		arr[i]=temp;
		sumi[i]=sumi[i-1]+temp;
		maxi=max(maxi,sumi[i]);
		if (sumi[i]>prev)
		{
			vec.pb({sumi[i],i});
			prev=sumi[i];
		}
	}
	
	
	ll q;


	for (int i=0;i<m;i++)
	{
		cin>>q;
	//	cout<<q<<" query ";
		if (maxi<q && sumi[n]<0)
		{
			cout<<-1<<" ";
			continue;
		}
		else
		{	
			if (n==1)
			{
				ll temp=sumi[i]/q;
				if (sumi[i]%q!=0)
				temp++;
				cout<<temp<<" ";
				continue;
			}
		    else if (maxi>=q)
			{
				ll l=0;
				ll r=vec.size()-1;
				ll ind=-1;
				while (l<=r)
				{
					ll mid=(l+r)/2;
					if (mid-1>=0)
					{	
						if (vec[mid].first==q)
						{
							cout<<vec[mid].second-1<<" ";
							break;
						}
						else if(vec[mid].first<q)
						{
							l=mid+1;
							continue;	
						}	
						else
						{
							if (vec[mid-1].first<q)
							{
								cout<<vec[mid].second-1<<" ";
								break;
							}
							else
							{
								r=mid-1;
							}
						}
					}
					else
					{
						if (vec[mid].first>=q)
						{
							cout<<vec[mid].second-1<<" ";
							break;
						}	 
						else if(vec[mid].first<q)
						{
							l=mid+1;
							continue;	
						}	
					}
				}
				continue;	
			}
			else
			{
			// maxi < q 
			ll ans=((q-maxi)/sumi[n])*n;
			q=q%sumi[n];
			
				ll l=0;
				ll r=vec.size()-1;
				ll ind=-1;
				while (l<=r)
				{
					ll mid=(l+r)/2;
					if (mid-1>=0)
					{	
						if (vec[mid].first==q)
						{
							ans+=vec[mid].second-1;
							break;
						}
						else if(vec[mid].first<q)
						{
							l=mid+1;
							continue;	
						}	
						else
						{
							if (vec[mid-1].first<q)
							{
								ans+=vec[mid].second-1;
								break;
							}
							else
							{
								r=mid-1;
							}
						}
					}
					else
					{
						if (vec[mid].first>=q)
						{
							ans+=vec[mid].second-1;
							break;
						}	 
						else if(vec[mid].first<q)
						{
							l=mid+1;
							continue;	
						}	
					}
				}
				cout<<ans<<" ";
				continue;	
			
				
			}
		}
		
	}
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	 cout<<endl;
	}
 return 0;
}

