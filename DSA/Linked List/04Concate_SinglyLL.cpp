// when node is not in use then it must be delete.

#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

struct Node{
    int data;
    Node *next;

  
  // Node *second = nullptr;
} *first = nullptr,*second = nullptr , *third = nullptr;

void Insert(struct Node* &first , int x)
{
    Node *t = new Node();
    
    t->data = x; 
    t->next = nullptr;

    if(first == nullptr)
    {
        first = t;
        
    }
    else{
        Node *p = first;
        while(p->next != nullptr){
            p = p->next;
        }
        p->next = t;
    }  



}

void InsertionAtBegining(Node * &first , int x){
    Node *temp = new Node();
    temp->data = x; 
    temp->next = nullptr; 
  Node  *last = first;
  
  temp->next = first;
  first = temp;
}


void InsertionAtLast(Node * &first , int x){
    Node *temp = new Node();
    temp->data = x; 
    temp->next = nullptr; 

    if(first == nullptr)
    {
        first = temp;
    }

    Node *last = first;
    while(last->next != nullptr){
        last = last->next;

    }
    last->next = temp;
}




void Display(struct Node *first )
{
    
    while (first)
    {
        cout<<first->data<<" ";
        first = first->next;
    }
    cout<<"NULL"<<endl;
    
}

void RdisplayLL(Node *first ){
    
    if(first->next == nullptr)
    {
        return;
    }
    cout<<first->data<<",";
    RdisplayLL(first->next);
}

// for displaying linkedlist in reverse order.
void RRdisplayLL(Node *first ){
    
    if(first == nullptr)
    {   
        cout<<"Null ,";
        return;
    }
    RRdisplayLL(first->next);
    cout<<first->data<<",";

}


void createLL( int A[], int n)
{
     first = new Node();
     first->data = A[0];
     first->next = nullptr;

     Node *last = first;
    for(int i = 1 ; i<n; i++){
        Node *Temp = new Node();
        Temp->data = A[i];
        Temp->next = nullptr;

        last->next = Temp;
        last = Temp;

    }
}


void createLL2( int A[], int n)
{
     second = new Node();
     second->data = A[0];
     second->next = nullptr;

     Node *last = second;
    for(int i = 1 ; i<n; i++){
        Node *Temp = new Node();
        Temp->data = A[i];
        Temp->next = nullptr;

        last->next = Temp;
        last = Temp;

    }
}

int countNodeinLL(Node *p)
{
    int count = 0;
    while(p)
    {
        count++;
        p = p->next;
    }
    return count;
}

void Concat(Node *A, Node* B)
{
    third = A;
    while(A->next != nullptr)
    {
        A = A->next;
    }
    A->next = B;
}


void merge(Node *A, Node* B)
{
    Node * last = nullptr;
   if(A->data < B->data)
   {
    third = last = A;
     A = A->next;
    third->next = nullptr;
   }
   else
   {
    third = last = B;
     B = B->next;
    third->next = nullptr;
   }

   while(A && B){
    if(A->data < B->data){

        last->next = A;
        last = A;
        A = A->next;
        last->next = nullptr;
    }
    else{
        last->next = B;
        last = B;
        B = B->next;
        last->next = nullptr;
    }


   }
   if(A) last->next = A;
   else last->next = B;
}



int main()
{ 
    
    

    


    int A[]={10,20,40,50,60};
    int B[]={15,18,25,30,55};
    int m = sizeof(B) / sizeof(B[0]);
    int n = sizeof(A) / sizeof(A[0]);

    

    
    createLL(A,n);
    createLL2(B,m);
   


    
    Display(first);
    Display(second);

    cout<<"Concat linked list is "<<endl;

    merge(first,second);
    Display(third);
    

    return 0;
}