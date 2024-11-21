#include<iostream>
using namespace std;

struct Node{
    int data; 
    Node *next;

}*front = nullptr, *rear = nullptr;



void enQueue( int x){
    Node *t = new Node;
    if(t == nullptr){
        cout<<"Queue is full"<<endl;
    }
    t->data = x;
    t->next = nullptr;
    if(rear == nullptr){
        rear = front = t;
    }
    else{
        rear->next = t; 
        rear = t;
        
    }
}

int  DelQueue(){
    int x = -1 ; 
    Node *p = front;
    if(rear == nullptr){
        cout<<"Queue is empty "<<endl;
    }
    else{
      
       x = p->data;
       front = p->next;
       delete (p);
    }
    return x;
}

void Display(){
    Node *p = front; 
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
int main()
{ 
   enQueue(10);
   enQueue(20);
   enQueue(30);
   enQueue(40);
   enQueue(50);
   enQueue(100);

   Display();
   DelQueue();
   DelQueue();
   Display();
 
    return 0;
}