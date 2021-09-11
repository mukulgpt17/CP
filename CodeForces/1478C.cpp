#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back




using namespace std;
ll arr[100009];
void fun()
{
	ll n;
	cin>>n;
//	unordered_set<ll> mp;
	vector<ll> vec;
	ll temp;
	for (ll i=0;i<2*n;i++)
	{
		cin>>temp;
		vec.pb(temp);	
	}	
	sort(vec.begin(),vec.end(),greater<ll>());
	vector<ll> ans;
	for (int i=1;i<2*n;i=i+2)
	{
		if (vec[i]==vec[i-1])
		ans.pb(vec[i]);
		else
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	
	if (ans[0]%2==0)
	{
		arr[n]=(ans[0]/(2*n));
	}
	else
	{
		cout<<"NO"<<endl;
		return;
	}
	//for (int i=0;i<n;i++)
	//cout<<ans[i]<<" ";
//	cout<<endl;
	unordered_set<ll> s;
	s.insert(arr[n]);
	
	for (int i=1;i<n;i++)
	{
		if ((ans[i-1]-ans[i])%(2*(n-i))==0)
		{
			arr[n-i]=arr[n-i+1]-((ans[i-1]-ans[i])/(2*(n-i)));
		//	cout<<arr[n-i]<<endl;
			if (arr[n-i]<=0)
			{
				cout<<"NO"<<endl;
				return ;
			}
			if (s.find(arr[n-i])!=s.end())
			{
				cout<<"NO"<<endl;
				return;	
			}	
			s.insert(arr[n-i]);
			
		}
		else
		{
			cout<<"NO"<<endl;
			return ;
		}
	}
	
	ll sum=0;
	for (int i=1;i<=n;i++)
		sum+=arr[i];
	
//	for (int i=1;i<=n;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
	if (2*sum==ans[n-1])
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
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
 return 0;
}

