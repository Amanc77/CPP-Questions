#include<iostream>
using namespace std;

class CircularQueue{
    private:
       int Size;
       int front;
       int rear;
       int *CirQue;

    public:
    CircularQueue(){
        Size = 10;
        front = rear = -1;
        CirQue = new int[Size];
    }

    CircularQueue(int x){
         this->Size = x;
         front = rear = -1;
         CirQue = new int[this->Size];
    }
    
    void Enqueue(int x);
    int DQueue();
    void Display();
    bool isEmpty();
    bool isFull();
    int firstEle();
    int lastEle();

    

};
bool CircularQueue::isEmpty(){
    return front == rear;
}

bool CircularQueue::isFull(){
    return (rear+1) % Size == front;
}

int CircularQueue::firstEle(){
    return CirQue[front+1];
}
int CircularQueue::lastEle(){
    return CirQue[rear];
}
void CircularQueue::Enqueue(int x){
    if(isFull()){
        cout<<"queue is full";
    }
    else{
        rear = (rear+1 ) % Size;
        CirQue[rear] = x;
    }


}

int CircularQueue::DQueue(){
    int x = -1; 
    if(isEmpty() ){
        cout<<"CircularQueue is full"<<endl;
    }
    else{
        front = (front +1 )% Size;
        x = CirQue[front];

    }
    return x;
}

void CircularQueue::Display() {
    int i = front +1;
    do{
        cout<<CirQue[i]<<" ";
        i = (i+1) % Size;
    }while(i != (rear +1)% Size);
    cout<<endl;
}




int main()
{ 
    struct CircularQueue q(6);
   
    q.Enqueue(2);

    q.Enqueue(32);

    q.Enqueue(53);

    q.Enqueue(84);

  q.Display();

     cout<<"Deleting front Element " << q.DQueue()<<endl;


    q.Display();





    q.Enqueue(76);
     cout<<"Deleting front Element " << q.DQueue()<<endl;

    q.Enqueue(94);
     cout<<"Deleting front Element " << q.DQueue()<<endl;

    q.Enqueue(208);

    q.Enqueue(2);

    

    q.Display();

    q.DQueue();
    q.Enqueue(4);
    q.Display();

    cout<<"First Element is "<<q.firstEle()<<endl;
    cout<<"last Element is "<<q.lastEle()<<endl;


    return 0;
}