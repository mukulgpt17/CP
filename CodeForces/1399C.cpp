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

	ll n;
	cin>>n;
	
	set<ll> s;
	vector<ll> ve(n);
	for (int i=0;i<n;i++)
	{
		cin>>ve[i];
	}
	sort(ve.begin(),ve.end());
	
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			s.insert(ve[i]+ve[j]);
		}
	}
	
	
	ll count=0;
	for (auto i=s.begin();i!=s.end();i++)
	{
		ll temp=*i;
		
		ll low=0;
		ll high=n-1;
		ll temp_c=0;
		
		while (low<high)
		{
			
			if (ve[low]+ve[high]==temp)
			{
				temp_c++;
				low++;
				high--;	
			}	
			else if (ve[low]+ve[high]<temp){
				low++;
			}
			else
			{
				high--;
			}
		}
		count=max(count,temp_c);
	}
	
	cout<<count<<endl;

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

