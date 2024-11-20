#include <iostream>
#include <string>
#include<math.h>
#include <cctype>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int x) {
        Node* t = new Node();
        t->data = x;
        t->next = top;
        top = t;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        Node* t = top;
        int x = t->data;
        top = top->next;
        delete t;
        return x;
    }

    int stackTop() {
        return isEmpty() ? -1 : top->data;
    }
};

bool isOperand(char ch) {
    return isalpha(ch) || isdigit(ch);
}

int precedence(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3;
    return 0;
}

string InfixToPostfix(string infix) {
    string postfix = "";
    Stack stack;

    for (char ch : infix) {
        if (isOperand(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            stack.push(ch);
        } else if (ch == ')') {
            while (!stack.isEmpty() && stack.stackTop() != '(') {
                postfix += stack.pop();
            }
            stack.pop();
        } else {
            while (!stack.isEmpty() && precedence(stack.stackTop()) >= precedence(ch)) {
                postfix += stack.pop();
            }
            stack.push(ch);
        }
    }

    while (!stack.isEmpty()) {
        postfix += stack.pop();
    }

    return postfix;
}

int evaluatePostfix(string postfix) {
    Stack st;

    for (char ch : postfix) {
        if (isdigit(ch)) {
            st.push(ch - '0'); // -'0' because of digits are treated here as char to contreing them int int we have to subtract ASCII zero.
        } else {
            int b = st.pop();
            int a = st.pop();
            switch (ch) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
                case '^': st.push(pow(a, b)); break;
            }
        }
    }

    return st.pop();
}

int main() {
    string infix = "3+5*2-8/4";
    string postfix = InfixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;

    int result = evaluatePostfix(postfix);
    cout << "Evaluation Result ish " << result << endl;

    return 0;
}
