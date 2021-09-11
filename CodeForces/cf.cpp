#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef unsigned long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair
bitset<4256250> is_prime;
ll pre_sum[300002];
ll modi=1000000007;
ll prime_num[300002];
ll child[300002];
bool visted[300002];
vector<ll> adj[300002];
ll ans;

void preprocess()
{
is_prime.set();
is_prime[0]=0;
is_prime[1]=0;

for (int i=2;i*i<4256250;i++)
{
	if (is_prime[i])
	{
		 for (int j = i * i; j < 4256250; j += i)
            is_prime[j] = false;
	}
}
prime_num[0]=1;
pre_sum[0]=0;
ll ind=1;

for (ll i=1;i<4256250;i++)
{
	if(is_prime[i])
	{	
		prime_num[ind]=i;
		pre_sum[ind]=(pre_sum[ind-1] +i)%(modi);
		pre_sum[ind]%=modi;
		ind++;
	}
}

}

ll dfs1(ll x)
{
	ll count=0;
	for (auto i:adj[x])
	{
		count++;
		count+=dfs1(i);
	}
	child[x]=count;
	return count;
}

bool cmp(ll a,ll b)
{
	return child[a]>child[b];
}



void dfs2(ll par,ll x)
{
	// cout<<adj[par].size()<<endl;
	if (adj[par].size()!=0)
	ans+=((x%modi)*(1+pre_sum[adj[par].size()-1])%modi)%modi;
	// cout<<ans<<endl;
	sort(adj[par].begin(),adj[par].end(),cmp);

	for(ll i=0;i<adj[par].size();i++)
	{
		if (child[adj[par][i]]>0)
		{
			dfs2(adj[par][i],x*prime_num[i]);
		}

	}
}

void solve()
{
	
	ll n,x;
	cin>>n>>x;
	ans=0;
	for (int i=0;i<=n;i++)
	{
		adj[i].clear();
		visted[i]=false;
	}
	ll a,b;
	for(int i=1;i<n;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		//adj[j].push_back(i);
	}  

	dfs1(1); // number of child 

	dfs2(1,x);
	// cout<<ans<<endl;
	ans+=x;
	 ans%=modi;
	cout<<ans<<endl;
}


main() 
{
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


    int t;
    cin>>t;
    preprocess();

    while (t--)
    {
    	solve();
    	// cout<<"Hello World"<<endl;
    }
return 0;
}
