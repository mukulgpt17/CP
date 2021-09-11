#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long int
int lfmx[200005];
int lfmi[200005];
int rfmx[200005];
int rfmi[200005];

int su[200005];
int pre[200005];
using namespace std;
void fun()
{
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
		
	lfmx[0]=0;
	lfmi[0]=0;
	pre[0]=0;
	for (int i=0;i<n;i++)
	{
		if (s[i]=='-')
		{
			pre[i+1]=pre[i]-1;
		
		}
		else
		{
			pre[i+1]=pre[i]+1;
		}
		lfmx[i+1]=max(lfmx[i],pre[i+1]);
		lfmi[i+1]=min(lfmi[i],pre[i+1]);
	}
	
	rfmx[n+1]=0;
	rfmi[n+1]=0;
	su[n+1]=0;
	for (int i=n;i>0;i--)
	{
		int d = s[i-1] == '+' ? 1 : -1;
		rfmx[i]=max(rfmx[i+1]+d,0);
		rfmi[i]=min(rfmi[i+1]+d,0);
	}
	
	vector<int> ans;
	for (int i=0;i<m;i++)
	{
		int l,r;
		cin>> l>>r;
		
		int mini=lfmi[l-1];
		int maxi=lfmx[l-1];
		mini=min(mini,rfmi[r+1]+pre[l-1]);
		maxi=max(maxi,rfmx[r+1]+pre[l-1]);
		
		
		ans.push_back(maxi-mini+1);
	}
	for (auto i : ans)
	{
		cout<<i<<endl;
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

