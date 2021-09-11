#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
int arr[200009];
int LSOne(int val)
{
	int answer=val&(-1*val);
	return answer;
}

int rsq(int b)
{
	int sum = 0; for (; b; b -= LSOne(b)) sum += arr[b];
return sum; }
int rsq(int a,int b)
{
	
	return rsq(b) - (a == 1 ? 0 : rsq(a - 1)); }

void adjust(int index,int val,int n)
{
	for (; index <= n; index += LSOne(index)) arr[index] += val; }
	
	
	
void fun()
{
	int n ,q;
	memset(arr,0,sizeof(arr));
	cin>>n>>q;
	
	string s,f,ff;
	cin>>s;
	cin>>f;
	ff=f;
	vector<pair<int,int>> pr;
	pair<int,int> temp;
	int a,b;
	for (int i=0;i<q;i++)
	{	
		cin>>a>>b;
		temp={a,b};
		pr.pb(temp);
	}	
	
	//reverse(pr.begin(),pr.end());
	for (int i=1;i<=f.size();i++)
	{
		if (f[i-1]=='1')
		{
			adjust(i,1,f.size());
		}
	}
	for(int i=pr.size()-1;i>=0;i--)
	{
		int a=pr[i].first;
		int b=pr[i].second;
		
		int su=rsq(a,b);
	//	cout<<a<<" "<<b<<" "<<su<<" ";
		int len=(b-a+1);
		
		if (len%2==0)
		{	if (su==len/2)
			{
				cout<<"NO"<<endl;
				return ;
			}
			len=len/2;
			len--;	
		}
		else
		{
			len=len/2;
		}
		
		if (su<=len)
		{
			for (int i=a;i<=b;i++)
			{	
				if (ff[i-1]=='1')
				adjust(i,-1,ff.size());
				ff[i-1]='0';
			}
			
		}
		else
		{	
			for (int i=a;i<=b;i++)
			{	
				if (ff[i-1]=='0')
				adjust(i,1,ff.size());
				ff[i-1]='1';
			
			}
		}
	}
	
	if(ff==s)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
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
