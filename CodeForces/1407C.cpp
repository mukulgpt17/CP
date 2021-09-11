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
	// a%b > b%a => b>a 
	
	int n;
	cin>>n;
	
	int i=1;
	vector<int> ve(n+1,-1);
	
	int mini=1;
	int maxi=2;
	
	for (int i=1;i<=n-1;i++)
	{
		// each 2 ->  q we get smaller number 
		int a,b;
		cout<<"? "<<mini<<" "<<maxi<<endl;
		cin>>a;
		cout<<"? "<<maxi<<" "<<mini<<endl;
		cin>>b;
		
		if (a>b)
		{
			ve[mini]=a;
			for (int i=mini+1;i<=n;i++)
			{
				if(ve[i]==-1)
				{
					mini=i;
					break;
				}
			}
			for (int i=maxi;i<=n;i++)
			{
				if (ve[i]==-1 && i!=mini)
				{
					maxi=i;
					break;
				}
			}
		}
		else
		{
			ve[maxi]=b;
			maxi++;
		}
		
	}
	
	cout<<"! ";
	for (int i=1;i<=n;i++)
	{
		if (ve[i]==-1)
		{
			cout<<n<<" ";
		}
		else
		{
			cout<<ve[i]<<" ";
		}
	}
	
	cout<<endl;
	return ;
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

