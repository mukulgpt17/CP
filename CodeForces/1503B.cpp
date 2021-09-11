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
	string s;
	cin>>s;
	int ct1=0;
	int ct2=0;
	int cm=0;
	for (int i=0;i<n;i++)
	{
		if (s[i]=='T')
		{
		if (cm!=(n/3))
		ct1++;
		else
		ct2++;
	}
		else
		{
			cm++;
			if (ct1<cm)
			{
				cout<<"NO"<<endl;
				return ;
			}
		}
	}
//	cout<<cm<<endl;
//	cout<<ct<<endl;1
	if (cm==n/3 && cm==ct1 && cm*2==(ct1+ct2) )
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}

void fun2()
{
	int n;
	
	cin>>n;
	string s;
	cin>>s;
	int sumi=0;
	int te=n/3;
	for (int i=0;i<n;i++)
	{
		if (s[i]=='T')
		{
			sumi++;
			if (sumi>te)
			{
				cout<<"NO"<<endl;
				return ;
			}
		}
		else
		{
			if (sumi>0)
			{
				sumi--;
			}
			else
			{
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	
	if (sumi==te)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun2();
	}
 return 0;
}

