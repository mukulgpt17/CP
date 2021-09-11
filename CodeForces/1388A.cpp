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
	int n;
	cin>>n;
	if (n<=30)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		if (n==36)
		{
		cout<<5<<" "<<10<<" "<<15<<" "<<n-30<<endl;	
		}
		else if(n==40)
		{
		cout<<6<<" "<<14<<" "<<15<<" "<<n-35<<endl;	
		}
		else if (n==44)
		{
		cout<<10<<" "<<14<<" "<<15<<" "<<n-39<<endl;		
		}
		else
		cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
	}


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

