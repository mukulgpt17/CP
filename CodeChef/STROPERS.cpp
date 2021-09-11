#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

void solve2()
{
string s;
	cin>>s;
	
	set<string> ss;
	set<pair<string,string>> ss1;
	vector<ll> pre(s.size());
	vector<ll> pr1(s.size());
	for (int i=0;i<s.size();i++)
	{
		if (i==0)
		{
			if (s[i]=='0')
			{
				pre[i]=0;
				pr1[i]=-1;
			}
			else
			{
				pre[i]=1;
				pr1[i]=i;
			}
		}
		else
		{
			if (s[i]=='0')
			{
				pre[i]=pre[i-1]+0;
				pr1[i]=pr1[i-1];
			}
			else
			{
				pre[i]=pre[i-1]+1;
				pr1[i]=i;
			}
		}
	}



	
	for (int i=0;i<s.size();i++)
	{
		for (int j=i;j<s.size();j++)
		{
			ll len=j-i+1;
			ll c1=pre[j];
			if (i!=0)
				c1-=pre[i-1];

			string temp="";

			if (c1==0)
			{
				temp+="1-0-0-";
				temp+=to_string(len);
				temp+="-1--1-0-0";
				ss.insert(temp);
				ss1.insert({temp,s.substr(i,j-i+1)});
			}
			else
			{
				ll jj=pr1[j]-i-1;
				temp+="1-";
				temp+=to_string(c1-1);
				temp+="-0-";
				temp+=to_string(jj-c1+1);
				temp+="-1-";
				temp+=to_string(jj);
				temp+="-0-";
				temp+=to_string(len-c1-(jj-c1+1));
				ss.insert(temp);
				ss1.insert({temp,s.substr(i,j-i+1)});
			}

		}

	}
	// for(auto i:ss1)
	// {
	// 	cout<<i.first<<" "<<i.second<< endl;
	// }
	cout<<ss1.size()<<endl;
	// cout<<ss.size()<<endl;


}




void solve()
{
	string s;
	cin>>s;
	
	set<string> ss;
	vector<ll> pre(s.size());

	for (int i=0;i<s.size();i++)
	{
		if (i==0)
		{
			if (s[i]=='0')
			{
				pre[i]=0;
			}
			else
			{
				pre[i]=1;
			}
		}
		else
		{
			if (s[i]=='0')
			{
				pre[i]=pre[i-1]+0;
			}
			else
			{
				pre[i]=pre[i-1]+1;
			}
		}
	}

	for (int i=0;i<s.size();i++)
	{
		for (int j=i;j<s.size();j++)
			{
				string temp=s.substr(i,j-i+1);
				ll count;

				if (i==0)
					count=pre[j];
				else
					count=pre[j]-pre[i-1];

				string temp1=temp;
				reverse(temp1.begin(),temp1.end());

				if (count%2==0 && ss.find(temp)==ss.end() && ss.find(temp1)==ss.end())
				{	
					ss.insert(temp);
				}
				else if (count%2 && ss.find(temp)==ss.end())
				{
					ss.insert(temp);
				}

			}
	}  

	//
	cout<<ss.size()<<endl;


  
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;
    cin>>t;

    while (t--)
    {
    	solve2();
    }
return 0;
}
