#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
struct edge
{
	int a;
	int b;
	int w;
};
int parent[200001];
int ranks[200001];
edge adj[200001] ;

 
bool comp(edge a,edge b)
{
	return a.w<b.w;
	
}

int find(int x)
{
    if(parent[x]==x)
        return x;
    
	parent[x] = find(parent[x]);
    
    return parent[x];
    
}

void unions(int x, int y)
{
    int x_rep = find(x);
    int y_rep = find(y);
    
    if(x_rep==y_rep)
        return;
    
    if(ranks[x_rep]<ranks[y_rep])
        parent[x_rep] = y_rep;
    
    else if(ranks[y_rep]<ranks[x_rep])
        parent[y_rep]=x_rep;
    
    else
        {
            parent[y_rep] = x_rep;
            
            ranks[x_rep]++;
        }
}
void fun()
{
//	initialize();
	int n,m,k;
	cin>>n>>m>>k;
	int index;
	int val=INT_MAX;
	
	
	for (int i=0;i<m;i++)
	{
		
		int a;
		int b;
		int ww;
		cin>>a>>b>>ww;
		adj[i].a=a;
		adj[i].b=b;
		adj[i].w=ww;
		
	}
	ll count=0;
	for (int i=0;i<=n;i++)
	{
		parent[i]=i;
		ranks[i]=0;
	}
	int edge=0;
	ll temp=INT_MAX;
	sort(adj,adj+m,comp);
	for (int i=0;i<m;i++)
	{
		int a1=find(adj[i].a);
		int b1=find(adj[i].b);
		
		if (a1!=b1)
		{	
			edge++;
			if (adj[i].w >k)
				count+=abs(adj[i].w-k);
			unions(a1,b1);	
			
		}
		if (edge==n-1)
		{
			temp=min(temp,1ll*abs(adj[i].w-k));
		}		
	}
	if (count>0)
	cout<<count<<endl;
	else
	cout<<temp<<endl;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		fun();
		
		
	}

 return 0;
}

