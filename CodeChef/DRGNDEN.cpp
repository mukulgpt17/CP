#include<bits/stdc++.h>
using namespace std;

struct Node 
{ 
    int data; 
    Node* prev;
    vector<Node*> next;
    Node (int data) 
    { 
        this->data = data; 
     	prev=NULL;
    } 
}; 



int main()
{
	int N,Q;
	
	cin>>N>>Q;
	
	pair<int,Node*> arr[N+1];
	Node *te= new Node(100);
//	te->next.push_back(te);
	te->prev=te;	
	arr[0]=make_pair(1000,te);


	for (int i=1;i<=N;i++)
	{
		int temp;
		cin>>temp;
		
		Node * temp1=new Node(temp);
	//	temp1->next.push_back(temp1);
		temp1->prev=temp1;	
		arr[i]=make_pair(temp,temp1);	
	}
	
	
	stack<int> s;
	s.push(0);
	
	for (int i=1;i<=N;i++)
	{
	
		while (s.empty()!=true && arr[s.top()].first<arr[i].first)
		{
			
			s.pop();
			
		}
		
		arr[s.top()].second->next.push_back((arr[i].second));
		arr[i].second->prev=arr[s.top()].second;
		s.push(i);
	}
	
	unordered_set<Node*> se;
	unordered_map<Node*,int> In;
	unordered_map<Node*,int> Out;
	
}
	
	

