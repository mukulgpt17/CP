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

int arr[10002];
int neg[10002];

void solve()
{
  	int n,m;

  	cin>>n>>m;

  	for (int i=0;i<m;i++)
  	{
  		int num;
  		cin>>num;
  		int nn;
        int flag=1;
        memset(arr,0,sizeof(arr));
        memset(neg,0,sizeof(neg));

        for (int j=0;j<num;j++)
        {
            cin>>nn;
            if (nn>=0)
            arr[nn]=1;
            else
            neg[abs(nn)]=1;

            // cout<<nn/<<" ";
        }

        for (int j=0;j<=10000;j++)
        {
            if (arr[j]==1 && neg[j]==1)
            {
                flag=0;
                break;
            }
        }

       

        if (flag==1)
        {
            // cout<<i<<endl;
            cout<<"YES"<<endl;
            return ;
        }
  	}

  	cout<<"NO"<<endl;
  	return ;
}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t=1;
    // cin>>t;

    while (t--)
    {
    	solve();
    }
return 0;
}
