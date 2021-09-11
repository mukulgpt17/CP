#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)
#define mod 1000000007

using namespace std;
map<int,int> mp;
int C(int n, int r)
{
 
    if (r > n)
        return 0;
    long long int m = 1000000007;
    long long int inv[r + 1] = { 0 };
    inv[1] = 1;
 
    // Getting the modular inversion
    // for all the numbers
    // from 2 to r with respect to m
    // here m = 1000000007
    for (int i = 2; i <= r; i++) {
        inv[i] = m - (m / i) * inv[m % i] % m;
    }
 
    int ans = 1;
 
    // for 1/(r!) part
    for (int i = 2; i <= r; i++) {
        ans = ((ans % m) * (inv[i] % m)) % m;
    }
 
    // for (n)*(n-1)*(n-2)*...*(n-r+1) part
    for (int i = n; i >= (n - r + 1); i--) {
        ans = ((ans % m) * (i % m)) % m;
    }
    return ans;
}



void fun()
{
	mp.clear();
	int n,k;
	cin>>n>>k;
	
	vector<int> vec;
	int temp;
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		vec.pb(temp);
		if (mp.find(temp)==mp.end())
		mp[temp]=1;
		else mp[temp]++;
	}

	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	map<int,int> ans;
	int poss=1;
	for (int i=0;i<k;i++)
	{	if (ans.find(vec[i])==ans.end())
		ans[vec[i]]=1;
		else
		ans[vec[i]]++;
	}
	
	for (auto i=ans.begin();i!=ans.end();i++)
	{
		int a,b;
		a=i->first;
		b=i->second;
	//	cout<<a<<b<<endl;	
		int cc=mp[a];
		poss=(poss*C(cc,b))%mod;
	}
	
	cout<<poss<<endl;
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

