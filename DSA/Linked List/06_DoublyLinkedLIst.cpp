#include<iostream>
using namespace std;

struct Node {
    Node *priv;
    int data;
    Node *next;
} *Head = nullptr;

void Creat_DoublyLL(int A[], int n) {
    Head = new Node();
    Head->data = A[0];
    Head->next = nullptr;
    Head->priv = nullptr;

    Node *last = Head;
    for (int i = 1; i < n; i++) {
        Node *t = new Node();
        t->data = A[i];
        t->next = nullptr;
        t->priv = last;
        last->next = t;
        
        last = t;
    }
}

void Display_DoublyLL(Node *Head) {
    if (Head == nullptr) return;

    Node *p = Head;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int lengthOfDoublyll(Node *p) {
    int len = 0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

void DeletetionINDoublyLL(Node* &Head, int pos) {
    if (Head == nullptr || pos <= 0 || pos > lengthOfDoublyll(Head)) return;

    Node *p = Head;
    
    // If deleting the head node
    if (pos == 1) {
        Head = Head->next;
        if (Head) Head->priv = nullptr; // Update the previous pointer of the new head
        delete p;
    } 
    else {
        // Traverse to the node at the specified position
        for (int i = 1; i < pos; i++) {
            p = p->next;
        }
        
        p->priv->next = p->next; // Update previous node's next pointer
        if (p->next) p->next->priv = p->priv; // Update next node's previous pointer, if it exists
        delete p;
    }
}

int main() {
    int A[5] = {5, 3, 43, 23, 4};
    Creat_DoublyLL(A, 5);

    cout << "Doubly Linked List: ";
    Display_DoublyLL(Head);
    int len = lengthOfDoublyll(Head);
    cout << "Length is: " << len << endl;

    DeletetionINDoublyLL(Head, 3);
    cout << "After deleting position 3: ";
    Display_DoublyLL(Head);

    DeletetionINDoublyLL(Head, 1);
    cout << "After deleting position 1: ";
    Display_DoublyLL(Head);

    return 0;
}


//sama as circular doubly linked list;