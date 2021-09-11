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
	int n,k;
	cin>>n>>k;
//	int t=ceil(sqrt(k));
	int arr[n][n];
	memset(arr,0,sizeof(arr));
	if(k%n==0)
	{
		cout<<0<<endl;
		
		for (int i=0;i<n;i++)
		{	int index=i;
			for (int j=0;j<(k/n);j++)
			{
				arr[i][index%n]=1;
				index++;
			}
		}
		
		
	}
	else
	{
		cout<<2<<endl;
		int count=0;
		for (int i=0;i<n;i++)
		{
			int index=i;
			for (int j=0;j<k/n;j++)
			{
				if(count<k)
				{
					count++;
					arr[i][index%n]=1;
					index++;
				}
				else
				{
					break;
				}
			}
		}
		int id=0;
		int tt=k/n;
		while (count<k)
		{
			arr[id][(tt+id)%n]=1;
			count++;
			id++;
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
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

