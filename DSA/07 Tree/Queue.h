
#include<iostream>
using namespace std;


struct Node{
    Node *lchild;
    int data;
    Node *rchild;
};


class Queue{
    private:
       int Size;
       int front;
       int rear;
       Node * *Que;

    public:
    Queue(){
        Size = 10;
        front = rear = -1;
        Que = new Node*[Size];
    }

    Queue(int x){
         this->Size = x;
         front = rear = -1;
         Que = new Node*[this->Size];
    }
    
    void Enqueue(Node* x);
    Node *DQueue();
    bool isEmpty();
    bool isFull();
   
    

};
bool Queue::isEmpty(){
    return front == rear;
}

bool Queue::isFull(){
    return rear == Size - 1;
}

void Queue::Enqueue(Node* x){
    if(isFull()){
        cout<<"queue is full";
    }
    else{
        rear++;
        Que[rear] = x;
    }


}

Node * Queue::DQueue(){
    Node* x = nullptr; 
    if(isEmpty() ){
        cout<<"Queue is full"<<endl;
    }
    else{
        front++;
        x = Que[front];

    }
    return x;
}



