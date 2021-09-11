#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
const int INF = 1e9 + 1;
int si=1e7+1;
int arr[(int)(1e7+1)];
int count_[(int)(1e7+1)];
void fun()
{
	int n,k;
	cin>>n>>k;
	
	vector<int>  a(n,1);
	ll x;
	for (int i=0;i<n;i++)
	{
		
		cin>>x;
		ll prev=1 ;
		ll count=0;
		while (x>1)
		{
			if (arr[x]==-1)
			{
				
				if (x==prev)
				{
					count++;
					if (count%2)
					a[i]=a[i]*prev;
				}
				else
				{
				if(count%2)
				a[i]=a[i]*prev;
				a[i]=a[i]*x;	
				}
				x=x/x;
			}
			else
			{
				if(arr[x]!=prev)
				{
					if (count%2)
					{
						a[i]=a[i]*prev;
						
					}
					prev=arr[x];
					count=1;
				}
				else
				{
					count++;
					
				}
				x=x/arr[x];
			}	
		}
	}

	vector<vector<int>> left(n,vector<int>(k+1));
	//	cout<<"M here "<<endl;
	for (int j=0;j<=k;j++)
	{
		int L=n; // prev ka left most possible index 
		int curr=0;
		
		for (int i=n-1;i>=0;i--)
		{
			while (L-1>=0 && curr+(count_[a[L-1]]>0)<=j)
			{
				L--;
				count_[a[L]]++;
				curr+=(count_[a[L]]>0);
			}
			
			left[i][j]=L;
			count_[a[i]]--;
			if (count_[a[i]]>1)
			{
				
				curr--;
			}
			
		}
	}

	 vector<vector<int>> dp(n + 1, vector<int>(k + 1, INF));
        for (auto &c : dp[0]) c = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= k; j++) {
                if (j > 0) dp[i][j] = dp[i][j -1];
                for (int lst = 0; lst <= j; lst++) {
                    dp[i][j] = min(dp[i][j], dp[left[i - 1][lst]][j -lst] + 1);
                }
            }
        }
	
	 int ans = INF;
        for (auto &c : dp.back()) ans = min(ans, c);
        cout << ans << "\n";
    }
   	

int main()
{
	memset(arr,-1,sizeof(arr));
	//-1 then its prime 
	
	for (int i=2;i*i<si;i++)
	{	if (arr[i]==-1)
		{
		// -1 is prime number 
			for (int j=i*i;j<si;j+=i)
			{
				 if(arr[j]==-1)
				 {
				 	arr[j]=i;
				 }
			}
		}
	}
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
	
 return 0;
}

