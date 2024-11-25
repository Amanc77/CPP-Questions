#include <iostream>
#include <algorithm> 
using namespace std;

class Node {
public:
    Node* lchild;
    int data;
    Node* rchild;
    int height;

    Node(int value) : data(value), lchild(nullptr), rchild(nullptr), height(1) {}
};

// Tree class containing the tree's root and all related functions
class AVLTree {
private:
    Node* root;

    // Helper functions for AVL tree operations
    int NodeHeight(Node* p) {
        if (p == nullptr) return 0;
        return p->height;
    }

    int BalanceFactor(Node* p) {
        if (p == nullptr) return 0;
        return NodeHeight(p->lchild) - NodeHeight(p->rchild);
    }

    Node* LLRotation(Node* p) {
        Node* pl = p->lchild;
        Node* plr = pl->rchild;

        pl->rchild = p;
        p->lchild = plr;

        // Update heights
        p->height = max(NodeHeight(p->lchild), NodeHeight(p->rchild)) + 1;
        pl->height = max(NodeHeight(pl->lchild), NodeHeight(pl->rchild)) + 1;

        return pl;
    }

    Node* RRRotation(Node* p) {
        Node* pr = p->rchild;
        Node* prl = pr->lchild;

        pr->lchild = p;
        p->rchild = prl;

        // Update heights
        p->height = max(NodeHeight(p->lchild), NodeHeight(p->rchild)) + 1;
        pr->height = max(NodeHeight(pr->lchild), NodeHeight(pr->rchild)) + 1;

        return pr;
    }

    Node* LRRotation(Node* p) {
        p->lchild = RRRotation(p->lchild);
        return LLRotation(p);
    }

    Node* RLRotation(Node* p) {
        p->rchild = LLRotation(p->rchild);
        return RRRotation(p);
    }

    Node* Insert(Node* p, int key) {
        if (p == nullptr) {
            return new Node(key);
        }

        if (key < p->data) {
            p->lchild = Insert(p->lchild, key);
        } else if (key > p->data) {
            p->rchild = Insert(p->rchild, key);
        } else {
            cout << "Duplicate keys are not allowed in AVL Tree.\n";
            return p; // No insertion for duplicate keys
        }

        // Update height of this node
        p->height = max(NodeHeight(p->lchild), NodeHeight(p->rchild)) + 1;

        // Balance the node if it becomes unbalanced
        int bf = BalanceFactor(p);

        // Left-heavy
        if (bf > 1 && key < p->lchild->data) return LLRotation(p); // LL Case
        if (bf > 1 && key > p->lchild->data) return LRRotation(p); // LR Case

        // Right-heavy
        if (bf < -1 && key > p->rchild->data) return RRRotation(p); // RR Case
        if (bf < -1 && key < p->rchild->data) return RLRotation(p); // RL Case

        return p; // Return unchanged node
    }

    void Inorder(Node* p) {
        if (p != nullptr) {
            Inorder(p->lchild);
            cout << p->data << " ";
            Inorder(p->rchild);
        }
    }

    void Preorder(Node* p) {
        if (p != nullptr) {
            cout << p->data << " ";
            Preorder(p->lchild);
            Preorder(p->rchild);
        }
    }

    void Postorder(Node* p) {
        if (p != nullptr) {
            Postorder(p->lchild);
            Postorder(p->rchild);
            cout << p->data << " ";
        }
    }

    void deleteTree(Node* p) {
        if (p != nullptr) {
            deleteTree(p->lchild);
            deleteTree(p->rchild);
            delete p;
        }
    }

public:
    AVLTree() : root(nullptr) {}
    ~AVLTree() { deleteTree(root); }

    void Insert(int key) {
        root = Insert(root, key);
    }

    void Inorder() {
        Inorder(root);
        cout << endl;
    }

    void Preorder() {
        Preorder(root);
        cout << endl;
    }

    void Postorder() {
        Postorder(root);
        cout << endl;
    }

    int Height() {
        return NodeHeight(root);
    }
};

// Main function to test the AVL Tree
int main() {
    AVLTree tree;

    cout << "Enter numbers to insert into AVL Tree (-1 to stop): \n";
    while (true) {
        int key;
        cin >> key;
        if (key == -1) break;
        tree.Insert(key);
    }

    cout << "\nInorder Traversal: ";
    tree.Inorder();

    cout << "Preorder Traversal: ";
    tree.Preorder();

    cout << "Postorder Traversal: ";
    tree.Postorder();

    cout << "Height of the AVL Tree: " << tree.Height() << endl;

    return 0;
}
