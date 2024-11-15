#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
} *Head = nullptr;

void CreatCircularLL(int A[], int n) {
    Head = new Node();
    Head->data = A[0];
    Head->next = Head;

    Node *last = Head;
    for (int i = 1; i < n; i++) {
        Node *t = new Node();
        t->data = A[i];
        t->next = Head;
        last->next = t;
        last = t;
    }
}

void Display_CircularLL(Node *Head) {
    if (Head == nullptr) return;

    Node *p = Head;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
    cout << endl;
}

int length(Node *p) {
    int len = 0;
    if (p == nullptr) return len;
    
    do {
        p = p->next;
        len++;
    } while (p != Head);
    
    return len;
}

void DeleteCircularLL(Node* &Head, int pos) {
    if (Head == nullptr || pos <= 0 || pos > length(Head)) return;

    Node *p = Head, *q = nullptr;
    
    // If deleting the head node
    if (pos == 1) {
        
        while (p->next != Head) p = p->next;

        // If the list has only one node
        if (p == Head) {
            delete Head;
            Head = nullptr;
        } else {
            // Set last node's next to Head's next (new head)
            p->next = Head->next;
            q = Head;
            Head = Head->next; // Update head to new head
            delete q;
        }
    } else {
        // Traverse to the node before the one to be deleted
        p = Head;
        for (int i = 0; i < pos - 2; i++) {
            p = p->next;
        }
        
        q = p->next;
        p->next = q->next;
        delete q;
    }
}

int main() {
    int A[5] = {5, 3, 43, 23, 4};
    CreatCircularLL(A, 5);

    cout << "Circular Linked List: ";
    Display_CircularLL(Head);
    int len = length(Head);
    cout << "Length is: " << len << endl;

    DeleteCircularLL(Head, 3);
    cout << "After deleting position 3: ";
    Display_CircularLL(Head);

    DeleteCircularLL(Head, 1);
    cout << "After deleting position 1: ";
    Display_CircularLL(Head);

    return 0;
}
