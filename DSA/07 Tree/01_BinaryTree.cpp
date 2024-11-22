#include<iostream>
#include "Queue.h"
using namespace std;

struct Node *root = nullptr;

 
void CreateTree(){
    Node *p , *t;
    int x;
    Queue que(50);
    cout<<"Enter root value ";
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = nullptr;
    que.Enqueue(root);

    while( ! que.isEmpty()){
        p = que.DQueue();
        cout<<"Enter left child of "<<p->data<<": ";
        cin>>x;
        if(x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = nullptr;
            p->lchild = t;
            que.Enqueue(t);
        }

        cout<<"Enter right child of "<<p->data<<": ";
        cin>>x;
        if(x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = nullptr;
            p->rchild = t;
            que.Enqueue(t);
        }
        
    }
}

void preOrder(Node *p) {
    if (p) {
        cout << p->data << " ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void postOrder(Node *p) {
    if (p) {
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout << p->data << " ";

    }
}

void inOrder(Node *p) {
    if (p) {
        inOrder(p->lchild);
        cout << p->data << " ";

        inOrder(p->rchild);
    }
}

int main() {
    CreateTree(); 

    cout << "Preorder Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}