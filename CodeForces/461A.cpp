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
	
	vector<int> vec(n);
	ll sumu=0;
	vector<int> pre(n);
	
	for (int i=0;i<n;i++)
	{
		cin>>vec[i];
		sumu+=vec[i];
	}
	
	sort(vec.begin(),vec.end());
	
	for (int i=0;i<n;i++)
	{
		
		if (i==0)
		{
			pre[0]=vec[i];
		}
		else
		{
			pre[i]=pre[i-1]+vec[i];
		}
		
		
		
		
	}

	cout<<sumu<<endl;
	ll answer=0;
	
	answer+=((int)(floor(log2(n)))+1)*sumu;
//	cout<<answer<<endl;
	//cout<<(int)pow(2,(int)floor(log2(n)))<<endl;
	ll ind=n-(int)pow(2,(int)floor(log2(n)));
	//cout<<n-2*ind-1<<endl;
	if (n!=1)
	answer+=(sumu-pre[n-2*ind-1]);
	
	cout<<answer<<endl;
	
	
	
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


//10
//8 10 2 5 6 2 4 7 2 1
