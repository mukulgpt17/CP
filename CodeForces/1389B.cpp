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
	int n,k,z;
	
	cin>>n>>k>>z;
	
	int arr[n+1];
	int maxx[n+1];
	int sump[n+1];
	arr[0]=0;
	int t; 
	for (int i=1;i<=n;i++)
	{
		cin>>t;
		arr[i]=t;
	}
	sump[0]=0;
	for (int i=1;i<=n;i++)
	{
		sump[i]=sump[i-1]+arr[i];
	}
//	cout<<" check 1"<<endl;
	int si=0;
	for (int i=1;i<=n;i++)
	{
		si=max(si,arr[i]+arr[i-1]);
		maxx[i]=si;
	}
//	cout<<"check2"<<endl;
//	k++;

	int answer=sump[k+1];

	for (int zz=1;zz<=z;zz++)
	{
		if (k-2*zz+2>=2)
		{
				
		int temp=sump[k-2*zz+1];
//	/	cout<<maxx[k-2*zz+2]<<endl;
		temp+=(maxx[k-2*zz+2]*zz);
		
		answer=max(answer,temp);
		}
		else
		{
			break;
		}
	}
	
	cout<<answer<<endl;
	

}
/*

18 11 4
11 19 18 19 19 5 14 15 17 4 10 9 8 17 9 2 15 10
*/
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

