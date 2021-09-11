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
	ll n,s;
	cin>>n>>s;
	
	int ind=0;
	int mod =s;
	string answer="";
	int i=0;
	int count=s-1;
	while (i<n)
	{
		int indd=ind%s;
		answer+=char(indd+97);
//		cout<<answer<<endl;
		i++;
		for(int ii=indd+1;ii<s & i<n;ii++)
		{
			answer+=char(indd+97);
			i++;
			if (i<n)
			{
				answer+=char(ii+97);
				i++;
			}
			else
			{
				break;
			}
		}
		ind++;
	}
	
	
cout<<answer<<endl;
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

