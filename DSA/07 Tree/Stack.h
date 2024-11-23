#include<iostream>
using namespace std;

struct Stack {
    int size;
    int top;
    Node* *s;
};

// Function to initialize the stack
void initializeStack(Stack &st, int size) {
    st.size = size;
    st.top = -1;
    st.s = new Node*[st.size];  // Allocate an array of the given size
}

// Function to check if the stack is empty
bool isEmpty(const Stack &st) {
    return st.top == -1;
}

// Function to check if the stack is full
bool isFull(const Stack &st) {
    return st.top == st.size - 1;
}

// Push function to add an element to the stack
void push(Stack* st, int x) {
    if (isFull(*st)) {
        cout << "Stack overflow, stack is full." << endl;
    } else {
        st->top++;
        st->s[st->top] = x;
    }
}

// Pop function to remove an element from the stack
Node * pop(Stack &st) {
    int x = -1;
    if (isEmpty(st)) {
        cout << "Stack underflow, stack is empty." << endl;
    } else {
        x = st.s[st.top];
        st.top--;
        
    }
    return x;
}

