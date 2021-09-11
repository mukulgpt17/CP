#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

map<pair<int,int>,bool> mp;
struct Node
{
	int a,b,c;
	Node(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
	}
};

int A,B,C;
void fun()
{
	cin>>A>>B>>C;
	mp.clear();	
	Node temp= Node(0,0,0);
	queue<Node> q;
	bool isSolve=false;
	q.push(temp);
//	mp[{0,0}]=true;
	int answer=-1;
	while (q.empty()!=true)
	{
		Node te=q.front();
		q.pop();
		if (mp.find({te.a,te.b})!=mp.end())
		{
			continue;
		}
		mp[{te.a,te.b}]=true;
		
		if (te.a>A || te.b>B || te.a<0 || te.b <0)
			continue;
		if (te.a==C || te.b==C)
		{
			isSolve=true;
			answer=te.c;
			break;
		}
		
		q.push(Node(0,te.b,te.c+1));
		q.push(Node(te.a,0,te.c+1));
		
		q.push(Node(A,te.b,te.c+1));
		q.push(Node(te.a,B,te.c+1));
		
		
		 
		
		for (int i=0;i<=max(A,B);i++)
		{
			//pour from b to a	
			if (te.a+i==A || te.b-i==0)
			q.push(Node(te.a+i,te.b-i,te.c+1));
			
			
			// pour from a to b 
			if (te.a-i==0 || te.b+i==B)
			{
				q.push(Node(te.a-i,te.b+i,te.c+1));
			}
			
		}
		
	}
	
	if (isSolve==true)
	cout<<answer<<endl;
	else
	cout<<-1<<endl;
	
	
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

