#include <iostream>
#include<vector>
#include <bits/stdc++.h> 

using namespace std;


bool isElement(vector <int>vec,int key)
{    vector<int>::iterator i; 
    for (i=vec.begin();i<vec.end();i++)
    {   
        if (*i==key)
            return true;
    }
    return false;
}

class Node
{
    public:
    int data=NULL;
    Node * next=NULL;
    Node(int a)
    {
        data=a;
    }
};
class LinkedList
{
    public :
    Node * head;
    
    void printlist()
    {
        Node *temp=head;
        while (temp!= NULL)
        {
             cout<<temp->data<<" ";
             temp=temp->next;
        }
    }
    
    void push(Node *node1)
    {
        Node *temp;
        temp=head;
        head=node1;
        node1->next=temp;
    }
    
    void append(Node *node1)
    {
        Node *temp;
        Node *prev;
        temp=head;
        while (temp!=NULL)
        {   prev=temp;
            temp=temp->next;
        }
        prev->next=node1;
    }
    
    void deleteNode(int key)
    {
        Node *temp;
        temp=head;
        //if the key is the head itself 
        if (head->data==key)
        {
            head=head->next;
            delete temp;
            return ;
        }
        
        Node *prev;
        prev=head;
        
        while (temp!=NULL)
        {
            if (temp->data==key)
            {
                prev->next=temp->next;
                delete temp;
                return;
            }
            prev=temp;
            
            temp=temp->next;
            
        }
    }
    int middle()
    {
        Node *temp1=head;
        Node *temp2=head;
        
        while (temp1->next!=NULL && temp1->next->next!=NULL)
        {
            temp1=temp1->next->next;
            temp2=temp2->next;
        }
        
        return temp2->data;
    }
    int numberCount(int val)
    {
        Node *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            if (temp->data==val)
                count+=1;
            temp=temp->next;
        }
        return count;
    }
 /*
    bool isLoop()
    {
        Node *temp=head;
        vector <Node *> vec_add;
        
        while (temp!=NULL)
        {
            if (find(vec_add.begin(),vec_add.end(),temp)!=vec_add.end())
                return true;
            else
                vec_add.push_back(temp);
            temp=temp->next;
        }
        return false;
    }
*/
    void removeDup()
    {
        vector <int> vec;
        Node *temp=head;
        Node *prev=head;
        
        while (temp!=NULL)
        {
            if (isElement(vec,temp->data))
                {   Node *node1=temp;
                   prev->next=temp->next;
                   temp=temp->next;
                   node1=NULL;
                }
            else
            {   vec.push_back(temp->data);
                prev=temp;
                temp=temp->next;
                
            }
        }
    }
    void swapElem(int a ,int b)
    {
        Node *temp=head;
        if (temp->data==a || temp->data==b)
        {
            Node *nodA=temp;
            Node *nexA=temp->next;
            Node *nodB;
            Node *nexB;
            Node *prevB;
            
            temp=temp->next;
            Node *prev=temp;
            while(temp!=NULL)
            {
                if(temp->data==a || temp->data==b)
                {
                    nodB=temp;
                    nexB=temp->next;
                    prevB=prev;
                }
                prev=temp;
                temp=temp->next;
            }
            
            if (nodA->next==nodB)
            {
                head=nodB;
                nodA->next=nexB;
                nodB->next=nodA;
            }
            else
            {   head=nodB;
                nodA->next=nexB;
                nodB->next=nexA;
                prevB->next=nodA;
            }
            
            
        }
        else
        {
            Node *nodA=NULL;
            Node *nodB=NULL;
            Node *nexA=NULL;
            Node *nexB=NULL;
            Node *prevA=NULL;
            Node *prevB=NULL;
        
            //Node *temp=head;
            Node *prev=head;
            
            while(temp!=NULL)
            {
                if ((temp->data==a || temp->data==b)&& nodA==NULL)
                {
                    nodA=temp;
                    prevA=prev;
                    nexA=temp->next;
                }
                else if ((temp->data==a || temp->data==b)&& nodB==NULL)
                {
                    nodB=temp;
                    prevB=prev;
                    nexB=temp->next;
                }
                else
                {
                    
                }
                prev=temp;
                temp=temp->next;
            }
            if(nodA->next==nodB)
            {
                prevA->next=nodB;
                nodB->next=nodA;
                nodA->next=nexB;
            }
            else
            {
                //last one baby 
                nodB->next=nexA;
                nodA->next=nexB;
                prevA->next=nodB;
                prevB->next=nodA;
            }
        }
    }
    
    void EvenOdd()
    {
        Node *temp=head;
        Node *temp_end;
        Node *prev=head;
        Node *end;
        while (temp!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        
        temp_end=prev;
        end=prev;
        temp=head;
        while (temp!=end)
        {
            if (temp->data %2==0)
            { 
                prev=temp;
                temp=temp->next;
            }
            else 
            {
                if (temp==head || temp==prev)
                {   
                    prev=temp->next;
                    temp_end->next=temp;
                    temp_end=temp;
                    temp=prev;
                    head=temp;
                }
                else
                {
                    prev->next=temp->next;
                    temp_end->next=temp;
                    temp_end=temp;
                    temp=prev->next;
                }
            }
        }
        temp_end->next=NULL ;
        
        
    }
    
    void reverse()
    {
        Node *temp=head;
        Node *temp1=head;
        
        Node *prev;
        Node *next;
        prev=temp;
        
        
        temp=temp->next;
        temp1->next=NULL;
        while (temp!=NULL)
        {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        head=prev;
    }
    
    
    void reversePrint(Node *node)
    {
        if (node->next==NULL)
            cout<<node->data<<" ";
        else
        {
            reversePrint(node->next);
            cout<<node->data<<" ";
        }
    }
/*    
    void reverseTwo() 
    {
        Node *temp=head;
        Node *next1=head;
        
        while (temp!=NULL)
        {
            if (temp->next==NULL)
            {
                head=temp;
                return;
            }
            
            next1=temp->next;
            temp->next=next1->next;
            next1->next=head;
            head=next;
            next=temp->next;
            temp=head;
            
        }
    }
    */

    
};

LinkedList* InsertList(LinkedList *lis1,LinkedList *lis2)
{
    LinkedList *lis3;
    lis3=new LinkedList;
    int nod1;
    int nod2;
    Node *temp1=lis1->head;
    Node *temp2=lis2->head;
    Node *newNode;
    
    cout<<temp1->data<<endl;
    cout<<temp2->data<<endl;
  while (temp1!=NULL && temp2!=NULL)
    {   nod1=temp1->data;
        nod2=temp2->data;
        cout<<nod1<<" "<<nod2<<endl;
        if (nod1==nod2)
        {   
            newNode= new Node(nod1);
            if (lis3->head==NULL)
                lis3->head=newNode;
                
            else
            {   
                lis3->append(newNode);
                cout<<"i came here"<<endl;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if (nod1>nod2)
            temp2=temp2->next;
            
        else
            temp1=temp1->next;
            
    }

    return lis3;
}

int ListIntersection(LinkedList *lis1,LinkedList *lis2)
{
    /* Note: lis1 is bigger list and lis2 is smaller list */
    unordered_set<Node*> nodeSet;
    
    Node *temp=lis1->head;
    while (temp!=NULL)
    {	
        nodeSet.insert(temp);
        temp=temp->next;
    }
    
    temp=lis2->head;
    while (temp!=NULL)
    {
        if (nodeSet.find(temp)!=nodeSet.end())
        {
            return temp->data;
        }
    }
    return -1;
}

LinkedList* ReveseMerge(LinkedList *lis1,LinkedList *lis2)
{
    Node *temp1=lis1->head;
    Node *temp2=lis2->head;
    Node *node;
    LinkedList *lis3;
    lis3=new LinkedList;
    
    while (temp1!=NULL && temp2!=NULL)
    {
        if (temp1->data < temp2->data)
        {   node=new Node(temp1->data);
            lis3->push(node);
            temp1=temp1->next;
        }
        else
        {
            node =new Node(temp2->data);
            lis3->push(node);
            temp2=temp2->next;
        }
    }
    if (temp1!=NULL)
    {
        while (temp1!=NULL)
        {
            node =new Node(temp1->data);
            lis3->push(node);
            temp1=temp1->next;
        }
    }
    if (temp2!=NULL)
    { 
        while (temp1!=NULL)
        {
            node =new Node(temp2->data);
            lis3->push(node);
            temp2=temp2->next;
        }
    }
    
    return lis3;
}

void partition(Node *start ,Node *end,Node *head,Node *end1)
{
    Node *pivot=end;
    Node *temp=start;
    Node *temp_start=start;
    Node *temp_prev=start;
    Node *temp_end=end;
    
    while (temp!=pivot)
    {
        if (temp->data > pivot->data)
        {
            if (temp==start || temp==temp_prev)
            {   
                Node *temp_next=temp->next;
                temp_end->next=temp;
                temp_end=temp;
                temp->next=NULL;
                temp=temp_next;
                temp_prev=temp;
                temp_start=temp;
            }
            else
            {
                temp_prev->next=temp->next;
                temp_end->next=temp;
                temp_end=temp;
                temp=temp_prev->next;
            }
        }
        else
        {
            temp_prev=temp;
            temp=temp->next;
        }
        
    }
    head->next=temp_start;
    temp_end->next=end1;
    
}


Node* ReversePart(Node *start,Node *end,Node *loopend)
{
    Node *prev=start;
    Node *temp=start;
    Node *temp_start;
    Node *next;
   //loopend :  
    
    while (temp !=end)
    {
        if (temp==start)
        {   loopend=temp;
           temp=temp->next;
           loopend->next=NULL; 
        }
        else
        {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
    }
    
    temp->next=prev;
    while (temp!=start)
    {
        cout <<temp->data <<" ";
        temp=temp->next;
    }
    
    
    return  temp;
}
void ReverseLoop(LinkedList *lis,int k)
{
    Node *start=NULL ;
    Node *end=NULL;
    Node *prev_end=NULL;
    Node *prev_start=NULL;
    Node *loop_start;
    Node *loop_end;
    Node *temp=lis->head;
    Node *lis_start=lis->head;
    int count=1;
    
    while (temp!=NULL)
    {   
        if (count!=k)
        {
           if (count==1)
           {
               loop_start=temp;
           }
            temp=temp->next;
            count++;
        }
        else
        {   
            loop_end=temp;
            temp=temp->next;
            start=ReversePart(loop_start,loop_end,end);
            if (end==lis_start)
                lis->head=start;
            if (end!=lis_start)
                prev_end->next=start;
            prev_end=end;
            count=1;
        }
    }
    
}



Node * Evenptr(Node * start,Node *prev)
{
    Node *temp=start;
   
    while (temp!=NULL)
    {
        if (temp->data%2==0)
            return temp;
        prev=temp;
        temp=temp->next;
    }
    return NULL;
    
}

Node * Oddptr(Node *start,Node *prev)
{
    Node *temp=start;
   
    while (temp!=NULL)
    {
        if (temp->data%2!=0)
            return temp;
        prev=temp;
        temp=temp->next;
    }
    return NULL;
}

void AlterTerm(LinkedList *lis)
{
    /* this function makes the link list to have alternate terms 
    i.e Odd number then even number || even number then odd number */
    
    Node *temp=lis->head;
    
    Node *nextEven;
    Node *prevEven=temp;
    
    Node *nextOdd;
    Node *prevOdd=temp;
    
    Node *temp1;
    
    nextEven = Evenptr(temp->next,prevEven);
    cout<<nextEven->data<<endl;
    cout<<prevEven->data<<endl;
    
    nextOdd=Oddptr (temp->next,prevOdd);
    cout<<nextOdd->data<<endl;
    cout<<prevOdd->data<<endl;
    
    while (temp!=NULL)
    {
        if (temp->data %2 ==0)
        {
            if (temp->next->data %2 !=0)
            {
                // indicating next term is Odd 
                temp=temp->next;
                nextOdd=Oddptr(temp->next,prevOdd);
            }   
            else
            {
                //next term is even 
               prevOdd->next=nextOdd->next;
               nextOdd->next=temp->next;
               temp->next=nextOdd;
               temp=nextOdd->next;
               
               nextOdd=Oddptr(temp->next,prevOdd);
               nextEven=Evenptr(temp->next,prevEven);
            }
        }
        else
        {
            if (temp->next->data%2==0)
            {
                //next is even 
                temp=temp->next;
                nextEven=Evenptr(temp->next,prevEven);
                cout<<nextEven->data<<endl;
            }
            else
            {
                prevEven->next=nextEven->next;
                nextEven->next=temp->next;
                temp->next=nextEven;
                temp=nextEven->next;
                
                nextEven=Evenptr(temp->next,prevEven);
                nextOdd=Oddptr(temp->next,prevOdd);
            }
        }
    }
    
}

void Reverse(Node *start,Node *end)
{
    Node *temp=start;
    Node *temp1=start;
    
    Node *prev;
    Node *next;
    prev=temp;
    
    
    temp=temp->next;
    temp1->next=NULL;
    while (temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    
}

void RevPart(LinkedList *lis,int k)
{   Node *head=lis->head;
    Node *temp =lis->head;
    int count=1;
    Node *temp_start;
    Node *temp_end;
    Node *end;
    Node *start;
    Node *prev_start;
    Node *prev_end;
    int flag=1;
    
    while (temp!=NULL)
    {
        if (count==1)
        {   if (temp->next==NULL)
            {
                prev_end->next=temp;
                return;
            }
            temp_start=temp;
            temp=temp->next;
            count+=1;
            
        }
        else if (count==k )
        {
            if (temp_start==head)
            {
                temp_end=temp;
                temp=temp->next;    
                temp_end->next=NULL;
                Reverse(temp_start,temp_end);
                prev_end=temp_start;
                count=1;
                lis->head=temp_end;
            }
            else
            {
                temp_end=temp;
                temp=temp->next;
                temp_end->next=NULL;
                Reverse(temp_start,temp_end);
                prev_end->next=temp_end;
                prev_end=temp_start;
                count=1;
            }
        }
        else
        {   if (temp->next==NULL)
            {   flag=0;
                break;
            }
            temp=temp->next;
            count+=1;
        }
    }
    if (flag==0)
    {
        Reverse(temp_start,temp);
        prev_end->next=temp;
        return;
    }
    
    
}

void circularList(Node *head)
{
	
	
	
	
	Node *temp=head;
	
	while (head->next!=temp)
		{
			cout<<head->data<<" ";
			head=head->next;
		}
		cout<<head->data<<" ";
		cout<<endl;
}
void InsertCirStrt(Node *head,int x)
{
	Node *temp = new Node (head->data);
	head->data=x;
	temp->next=head->next;
	head->next=temp;
}



int main()
{
	
 Node *node1;
 Node *node2;
 Node *node3;
 Node *node4;
 Node *node5;
 Node *node6;
 Node *node7;
 Node *node8;
 Node *node9;

 
 node1=new Node (1);
 node2=new Node (2);
 node3=new Node (3);
 node4=new Node (4);
 node5=new Node (5);
 node6=new Node (6);
 node7=new Node (7);
 node8=new Node (8);
 node9=new Node (9);

 node1->next=node2;
 node2->next=node3;
 node3->next=node4;
 node4->next=node5;
 node5->next=node6;
 node6->next=node7;
 node7->next=node8;
 node8->next=node9;
 node9->next=node1;
 
 
 LinkedList *lis;
 lis=new LinkedList;
 lis->head=node1;
 InsertCirStrt(lis->head,10);
 circularList(lis->head);
 
 //cout<<endl;
  return 0;
}

