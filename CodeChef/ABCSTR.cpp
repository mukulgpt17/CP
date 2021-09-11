#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
using namespace std;

void fun1()
{
	string s;
	cin>>s;
	ll count=0;
	vector<ll> A(s.size()+1);
	vector<ll> B(s.size()+1);
	vector<ll> C(s.size()+1);
	
	A[0]=0;
	B[0]=0;
	C[0]=0;
	
	map<pair<ll,ll>,ll> mp;
	mp[{0,0}]=1;
	for (int i=1;i<=s.size();i++)
	{
		if (s[i-1]=='A')
		{
			A[i]=A[i-1]+1;
			B[i]=B[i-1];
			C[i]=C[i-1];
		}
		else if (s[i-1]=='B')
		{	A[i]=A[i-1];
			B[i]=B[i-1]+1;
			C[i]=C[i-1];
		}
		else if (s[i-1]=='C')
		{
			A[i]=A[i-1];
			B[i]=B[i-1];
			C[i]=C[i-1]+1;
		}
		
		pair<ll,ll> pr={A[i]-B[i],A[i]-C[i]};
		if (mp.find(pr)!=mp.end())
		{
			count+=mp[pr];
			mp[pr]++;
		}
		else
		{
			mp[pr]=1;
		}
	}
	cout<<count<<endl;
}



int main()
{
	fun1();

 return 0;
}

