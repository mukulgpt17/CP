#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void fun()
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	ll count=0;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]=='1')
		count++;
	}
	if (count%2 || s[0]=='0' || s[n-1]=='0')
	{
		cout<<"NO"<<endl;
		return ;
	}
	else
	{
		string a;
		string b;
		ll k=0;
		bool flip=false;
		for (int i=0;i<n;i++)
		{
			if (s[i]=='1')
			{
				if (2*k<count) {
					a.pb('(');
				}
				else
				a.pb(')');
				
				b.pb(a.back());
				k++;
			}
			else
			{
				a.pb(flip==true? ')' : '(');
				b.pb(flip==true? '(' : ')');
				flip=!flip;
			}
			
		}
			cout<<"YES"<<endl;
			cout<<a<<endl;
	cout<<b<<endl;

	}
	

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

