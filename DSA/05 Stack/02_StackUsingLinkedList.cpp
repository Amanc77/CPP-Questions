#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
}*Top = nullptr;



// Function to check if the stack is empty
bool isEmpty() {
    return Top == nullptr;
}

// Function to check if the stack is full
bool isFull() {
    return !true;
    
}

// Push function to add an element to the stack
void push( int x) {
    if(!isFull()){
        Node *t = new Node;
        t->data = x;
        t->next = Top;
    
        Top = t;
    }
    
    
}

// Pop function to remove an element from the stack
int pop() {
    int x = -1;
    if (isEmpty()) {
        cout << "Stack underflow, stack is empty." << endl;
        
    } else {
        Node *t = Top;
         x = t->data;

        t = Top->next;

        Top = t;
    }
    return x;
}

// Function to get the top element of the stack without popping it
int stackTop() {
    if (!isEmpty()) {
        return Top->data;
    }
    return -1;  // Return -1 if the stack is empty
}

// Function to get the value at a specific index from the top
int peek(int index) {
    if(index < 0 )
    {
        return -1;
    }
    Node *p = Top;
    for(int i = 0 ; p != nullptr && i < index-1; i++){
        p = p->next;
     }
    if(p != nullptr){
        return p->data;
    }
    else{
        return -1;
    }
}

// Display function to print all elements in the stack
void Display() {
    Node *p = Top;
    while(p != nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout << endl;


    
}

int main() {
  
    

    push( 5);
    push( 15);
    push( 25);
    push( 35);
    push( 45);

    Display();
    cout << "Popped element is " << pop() << endl;
     Display();

     cout << "Top element is " << stackTop() << endl;
     cout<< "Element at index 3 from top is " << peek(3) << endl;

    return 0;
}
