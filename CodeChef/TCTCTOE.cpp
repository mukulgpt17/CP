#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
map<ll ,pair<ll,ll>> mp;

void solve()
{
	vector<string> ve(3);
	ll x=0;
	ll o=0;
	ll em=0;

	for (int i=0;i<3;i++)
	{
		cin>>ve[i];
	}
	
	for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			if (ve[i][j]=='X')
			x++;
			else if (ve[i][j]=='O')
			o++;
			else if (ve[i][j]=='_')
			em++;
		}
	}
	
	if (mp[em].first==x && mp[em].second==o)
	{
		ll x_win=0;
		ll y_win=0;
		
		// checking for x win 
		
		for (int i=0;i<3;i++)
		{
			ll c=0;
			for (int j=0;j<3;j++)
			{
				if (ve[i][j]=='X')
				c++;
			}
			if (c==3)
			x_win+=1;
			
		}
	
		
		for (int i=0;i<3;i++)
		{
			ll c=0;
			for (int j=0;j<3;j++)
			{
				if (ve[j][i]=='X')
				c++;
			}
			if (c==3)
			x_win+=1;
			
		
		}	

		
			
			// main daignal 
			ll dd=0;
			for (int i=0;i<3;i++)
			{
				if(ve[i][i]=='X')
				dd++;
			}
			if (dd==3)
			x_win+=1;
		
	
			ll nd=0;
			for (int i=0;i<3;i++)
			{
				if (ve[i][3-i-1]=='X')
				nd++;
			}
			
			if (nd==3)
			x_win+=1;
	
		
//		cout<<x_win<<endl;
		// y win
		
		for (int i=0;i<3;i++)
		{
			ll c=0;
			for (int j=0;j<3;j++)
			{
				if (ve[i][j]=='O')
				c++;
			}
			if (c==3)
			y_win+=1;
			
		
		}
	
		
		for (int i=0;i<3;i++)
		{
			ll c=0;
			for (int j=0;j<3;j++)
			{
				if (ve[j][i]=='O')
				c++;
			}
			if (c==3)
			y_win+=1;
		
		}	
		
		
		
			// main daignal 
			 dd=0;
			for (int i=0;i<3;i++)
			{
				if(ve[i][i]=='O')
				dd++;
			}
			if (dd==3)
			y_win+=1;
	
		
		 nd=0;
			for (int i=0;i<3;i++)
			{
				if (ve[i][3-i-1]=='O')
				nd++;
			}
			
			if (nd==3)
			y_win+=1;
	
//		cout<<x_win<<" "<<y_win<<endl;
		if (x_win>=1 && y_win>=1)
		cout<<3<<endl;
//		else if (x_win>1 || y_win>1)
//		cout<<3<<endl;
		else if (x_win>=1 && em!=4 && em!=2 && em!=0 )
		cout<<3<<endl;
		else if (y_win>=1 && em!=3 && em!=1)
		cout<<3<<endl;
		else if (em==0 || x_win>=1 ||y_win>=1 )
		cout<<1<<endl;
		else 
		cout<<2<<endl;
	}
	else
	{
		cout<<3<<endl;
	}

}

int main()
{	
	mp[9]={0,0};
	mp[8]= {1,0};
	mp[7]={1,1};
	mp[6]={2,1};
	mp[5]={2,2};
	mp[4]={3,2};
	mp[3]={3,3};
	mp[2]={4,3}; 
	mp[1]={4,4};
	mp[0]={5,4}; 
	
	int t;
	cin>>t;
	while (t--)
	{
	 solve();
	}
 return 0;
}

