#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

int dp[2005][2005];
int change[2005][12];
vector<string> digit;
vector<string> curr;

int fun1(int index,int k, int &n)
{
	if (index==n)
	{
		if (k==0)
		{
	//	cout<<"check1"<<endl;
		return 0;
	  }
		
		else
		return -1;
		
	}
	
	if (k<0)
	return -1;
	
	if (dp[index][k]!=-1)
	{
		return dp[index][k];
	}
	else
	{
		int flag=0;
		
		for (int i=9;i>=0;i--)
		{
			int ch=change[index][i];
			//cout<<ch<<endl;
			if (ch!=-1 && ch<=k)
			{
				int temp=fun1(index+1,k-ch,n);
				if (temp>=0)
				{
					dp[index][k]=i;
					return i;	
				}
				
			}
		}
		dp[index][k]=-2;
		return -2;	
	}
}
void fun()
{
	int n;
	int k;
	cin>>n>>k;
		
	curr.clear();
	digit.clear();
	memset(dp,-1,sizeof(dp));
	memset(change,-1,sizeof(change));		
	string temp;
	
	digit.push_back("1110111"); //0
	digit.push_back("0010010"); //1
	digit.push_back("1011101"); //2
	digit.push_back("1011011"); //3
	digit.push_back("0111010"); //4
	digit.push_back("1101011"); //5
	digit.push_back("1101111"); //6
	digit.push_back("1010010"); //7
	digit.push_back("1111111"); //8 
	digit.push_back("1111011"); //9
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		curr.push_back(temp);
	}
	
	for (int i=0;i<n;i++)
	{
		//int cnt=0;
		string tm1=curr[i];
		for (int j=0;j<10;j++)
		{
			string tm2=digit[j];
			int cnt=0;
			int flag=0;
			for (int k=0;k<7;k++)
			{	// i can only turn onn the segment i cant turn it off 
				if (tm1[k]=='0' && tm2[k]=='1')
				cnt++;
				else if (tm1[k]=='1' && tm2[k]=='0')
				{
					flag=1;
					break;
				}
			}
			
			if (flag==0)
			{
				change[i][j]=cnt;
			}
			else
			{
				change[i][j]=-1;
			}
		}
	}
	fun1(0,k,n);	
//	cout<<dp[0][k]<<endl;
	if (dp[0][k]>=0)
	{
		string ans="";
		int temp=k;
		int ind=0;
		while (temp>=0 && ind<n)
		{
			ans+=to_string(dp[ind][temp]);
			temp=temp-change[ind][dp[ind][temp]];
			ind++;
		}
		cout<<ans<<endl;
		return ;
	}
	else
	{
		cout<<-1<<endl;
		return;
	}
}
int main()
{
	fun();

 return 0;
}

