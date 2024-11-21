#include<iostream>
using namespace std;

class Queue{
    private:
       int Size;
       int front;
       int rear;
       int *Que;

    public:
    Queue(){
        Size = 10;
        front = rear = -1;
        Que = new int[Size];
    }

    Queue(int x){
         this->Size = x;
         front = rear = -1;
         Que = new int[this->Size];
    }
    
    void Enqueue(int x);
    int DQueue();
    void Display();
    bool isEmpty();
    bool isFull();
    int firstEle();
    int lastEle();

    

};
bool Queue::isEmpty(){
    return front == rear;
}

bool Queue::isFull(){
    return rear == Size - 1;
}

int Queue::firstEle(){
    return Que[front+1];
}
int Queue::lastEle(){
    return Que[rear];
}
void Queue::Enqueue(int x){
    if(isFull()){
        cout<<"queue is full";
    }
    else{
        rear++;
        Que[rear] = x;
    }


}

int Queue::DQueue(){
    int x = -1; 
    if(isEmpty() ){
        cout<<"Queue is full"<<endl;
    }
    else{
        front++;
        x = Que[front];

    }
    return x;
}

void Queue::Display() {
    for(int i = front + 1; i<=rear; i++){
        cout<<Que[i]<<" ";
    }
    cout<<endl;
}




int main()
{ 
    struct Queue q(100);
   
    q.Enqueue(2);

    q.Enqueue(32);

    q.Enqueue(53);

    q.Enqueue(84);

  q.Display();

     cout<<"Deleting front Element " << q.DQueue()<<endl;


    q.Display();





    q.Enqueue(76);

    q.Enqueue(94);

    q.Enqueue(208);
    q.Display();

    cout<<"First Element is "<<q.firstEle()<<endl;
    cout<<"last Element is "<<q.lastEle()<<endl;


    return 0;
}