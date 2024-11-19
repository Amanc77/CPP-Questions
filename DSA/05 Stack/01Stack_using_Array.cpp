#include<iostream>
using namespace std;

struct Stack {
    int size;
    int top;
    int *s;
};

// Function to initialize the stack
void initializeStack(Stack &st, int size) {
    st.size = size;
    st.top = -1;
    st.s = new int[st.size];  // Allocate an array of the given size
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
int pop(Stack &st) {
    int x = -1;
    if (isEmpty(st)) {
        cout << "Stack underflow, stack is empty." << endl;
    } else {
        x = st.s[st.top];
        st.top--;
        
    }
    return x;
}

// Function to get the top element of the stack without popping it
int stackTop(const Stack &st) {
    if (!isEmpty(st)) {
        return st.s[st.top];
    }
    return -1;  // Return -1 if the stack is empty
}

// Function to get the value at a specific index from the top
int peek(const Stack &st, int index) {
    if (index <= st.top && index >= 0) {
        return st.s[st.top - index];
    }
    cout << "Invalid index." << endl;
    return -1;
}

// Display function to print all elements in the stack
void Display(const Stack &st) {
    for (int i = st.top; i >= 0; i--) {
        cout << st.s[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack st;
    int size;
    cout << "Enter stack size: ";
    cin >> size;

    initializeStack(st, size);

    push(&st, 5);
    push(&st, 15);
    push(&st, 25);
    push(&st, 35);
    push(&st, 45);

    Display(st);
    cout << "Popped element is " << pop(st) << endl;
    Display(st);

    cout << "Top element is " << stackTop(st) << endl;
    cout << "Element at index 2 from top is " << peek(st, 2) << endl;

    return 0;
}
