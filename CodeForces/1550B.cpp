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
int minSteps(string S)
{
    
    string new_str;
 
    
    int N = S.length();
 
    int i = 0;
 
    while (i < N) {
 
        new_str += S[i];
 
        
        int j = i;
        while (i < N && S[i] == S[j])
            ++i;
    }
 
    // Print the minimum steps required
    return ceil((new_str.size() + 1) / 2.0);
}



void solve()
{
	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	if (b>=0)
	{
		cout<<(a+b)*n<<endl;
		return ;
	}  
	else
	{

		int an=a*n;

		if(n==1)
		{
			an+=b;
			cout<<an<<endl;
			return ;
		}
		else
		{
			int ct=minSteps(s);
			an+=b*ct;

			cout<<an<<endl;
			return ;
		}
	}
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
    	solve();
    }
return 0;
}
