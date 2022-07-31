#include<bits/stdc++.h>
using namespace std;
//#define NULL __null

class node {
    public:
    int data;
    node*next;

    //constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~node()
    {
        int value=this->data;
        //memory free
       
       if(this->next!=NULL){
        delete next;
        this->next=NULL;
       }
       cout<<"memory is free for node  ";
    }
};




void insert (node* &head,int dataa)
{
    //new node create
     node*temp=new node(dataa);
     temp->next=head;
     head=temp;
}



void itail(node* &tail,int dataa)
{
     //new node create
     node*temp=new node(dataa);
     tail->next=temp;
     tail=temp;
}


//taverse LL
void print(node* &head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtPosition(node* &head,int position,int d)
{
    if(position==1)
    {
        insert(head,d);
        return ;
    }
   
      

    node* temp= head;
    int cnt=1;
    while (cnt<position-1)
    {
     
        temp=temp->next;
        cnt++;

    }
    //creating a node for d

    node*nodetoinsert=new node (d);
    nodetoinsert->next = temp->next;
    temp->next =nodetoinsert;

    
    
}

void idelete(int position, node*&head)
{
    if(position==1)
    {
        node* temp= head;
        head=head ->next;
        //memory free start node
        temp->next =NULL;
        delete temp;

    }
    else{
        //deleting middle node
        node*curr=head;
        node*prev=NULL ;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    node* node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    node*head=node1;
       node*tail=node1;
           print(head);
   
  
  
    itail(tail ,12);
    print(head);
     
  
      itail(tail,15);
      print (head); 

      insertAtPosition(head,4,22);
      print (head); 
      
    //   idelete(1,head);
    //   print (head);

    //    idelete(2,head);
    //   print (head);


    //    idelete(3,head);
    //   print (head);


       idelete(4,head)
      print (head);
   
   
    return 0;


}