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
    return !true;  //ye kabhi full hoga hi nahi bahut rair hai
    
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
    for(int i = 0 ; p != nullptr && i < index; i++){
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

bool isBalanceDemo(string exp){
    int n = exp.size();
    for(int i = 0 ; i<n ;i++){
        if(exp[i] == '('){
            push(exp[i]);
        }
        else if(exp[i] == ')'){
            if(isEmpty()){
                return false;
            }
            pop();
        }
    }
    return isEmpty();
}

bool isBalance(string exp){
    int n = exp.size();
    for(int i = 0 ; i<n ;i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['  ){
            push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'  ){
            if(isEmpty()){
                return false;
            }
            else if ((exp[i] == ')' && stackTop() == '(') ||
                (exp[i] == '}' && stackTop() == '{') ||
                (exp[i] == ']' && stackTop() == '[')) {
                pop(); // Valid pair, so pop the stack
            } else {
                return false; // Mismatch found
            }
        }
    }
    return isEmpty();
}
int main() {
  
   string str = "a(+(b*(c/e)))" ;

   cout<<"let's check Expresion balancing "<<isBalance(str)<<endl;

   string str2 = "{([a+b*[c-d]])/e}";

   cout<<"let's check Expresion2  balancing "<<isBalance(str2)<<endl;
   

    return 0;
}
