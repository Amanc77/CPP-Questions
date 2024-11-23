#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Node class for each tree element
class Node {
public:
    Node* lchild;
    int data;
    Node* rchild;
};

// Tree class containing the tree's root and all related functions
class Tree {
private:
    Node* root;

    // Helper function to delete the tree recursively
    void deleteTree(Node* p);

    // Helper function to count nodes of specific types
    int countNodes(Node* p);
    int countLeafNodes(Node* p);
    int countInternalNodes(Node* p);

public:
    Tree();  
    ~Tree();

    void CreateTree();
    void Preorder(Node* p);
    void Preorder() { Preorder(root); }
    void Inorder(Node* p);
    void Inorder() { Inorder(root); }
    void Postorder(Node* p);
    void Postorder() { Postorder(root); }
    void Levelorder(Node* p);
    void Levelorder() { Levelorder(root); }

    int Height(Node* p);
    int Height() { return Height(root); }

    // Iterative traversals
    void iterativePreorder(Node* p);
    void iterativePreorder() { iterativePreorder(root); }
    void iterativeInorder(Node* p);
    void iterativeInorder() { iterativeInorder(root); }
    void iterativePostorder(Node* p);
    void iterativePostorder() { iterativePostorder(root); }

    int TotalNodes() { return countNodes(root); }
    int LeafNodes() { return countLeafNodes(root); }
    int InternalNodes() { return countInternalNodes(root); }
};

// Constructor
Tree::Tree() {
    root = nullptr;
}

// Destructor
Tree::~Tree() {
    deleteTree(root);
}

void Tree::deleteTree(Node* p) {
    if (p != nullptr) {
        deleteTree(p->lchild);
        deleteTree(p->rchild);
        delete p;
    }
}

// Create the tree using level-order input
void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;
    queue<Node*> q;

    cout << "Enter root data: ";
    cin >> x;

    root = new Node;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);

    while (!q.empty()) {
        p = q.front();
        q.pop();

        cout << "Enter left child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }

        cout << "Enter right child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}

// Recursive traversals
void Tree::Preorder(Node* p) {
    if (p) {
        cout << p->data << " ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node* p) {
    if (p) {
        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node* p) {
    if (p) {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << " ";
    }
}

void Tree::Levelorder(Node* p) {
    if (!p) return;

    queue<Node*> q;
    q.emplace(p);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->lchild) q.emplace(temp->lchild);
        if (temp->rchild) q.emplace(temp->rchild);
    }
}

int Tree::Height(Node* p) {
    if (p == nullptr) return 0;

    int leftHeight = Height(p->lchild);
    int rightHeight = Height(p->rchild);

    return max(leftHeight, rightHeight) + 1;
}

// Iterative traversals
void Tree::iterativePreorder(Node* p) {
    stack<Node*> stk;
    while (p != nullptr || !stk.empty()) {
        if (p != nullptr) {
            cout << p->data << " ";
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            p = p->rchild;
        }
    }
}

void Tree::iterativeInorder(Node* p) {
    stack<Node*> stk;
    while (p != nullptr || !stk.empty()) {
        if (p != nullptr) {
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            cout << p->data << " ";
            p = p->rchild;
        }
    }
}

void Tree::iterativePostorder(Node* p) {
    stack<long int> stk;
    long int temp;
    while (p != nullptr || !stk.empty()) {
        if (p != nullptr) {
            stk.emplace((long int)p);
            p = p->lchild;
        } else {
            temp = stk.top();
            stk.pop();
            if (temp > 0) {
                stk.emplace(-temp);
                p = ((Node*)temp)->rchild;
            } else {
                cout << ((Node*)(-1 * temp))->data << " ";
                p = nullptr;
            }
        }
    }
}

int Tree::countNodes(Node* p) {
    if (p == nullptr) return 0;
    return 1 + countNodes(p->lchild) + countNodes(p->rchild);
}

int Tree::countLeafNodes(Node* p) {
    if (p == nullptr) return 0;
    if (p->lchild == nullptr && p->rchild == nullptr) return 1;
    return countLeafNodes(p->lchild) + countLeafNodes(p->rchild);
}

int Tree::countInternalNodes(Node* p) {
    if (p == nullptr || (p->lchild == nullptr && p->rchild == nullptr)) return 0;
    return 1 + countInternalNodes(p->lchild) + countInternalNodes(p->rchild);
}

int main() {
    Tree bt;

    bt.CreateTree();
    cout << "\nPreorder: ";
    bt.Preorder();
    cout << "\nInorder: ";
    bt.Inorder();
    cout << "\nPostorder: ";
    bt.Postorder();
    cout << "\nLevelorder: ";
    bt.Levelorder();
    cout << "\nHeight: " << bt.Height();

    cout << "\nIterative Preorder: ";
    bt.iterativePreorder();
    cout << "\nIterative Inorder: ";
    bt.iterativeInorder();
    cout << "\nIterative Postorder: ";
    bt.iterativePostorder();

    cout << "\nTotal Nodes: " << bt.TotalNodes();
    cout << "\nLeaf Nodes: " << bt.LeafNodes();
    cout << "\nInternal Nodes: " << bt.InternalNodes() << endl;

    return 0;
}
