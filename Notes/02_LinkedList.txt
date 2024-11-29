
# Linked List Notes

## 1. Introduction to Linked Lists
A linked list is a collection of nodes which contains data and a reference to the next node.

A linked list is a data structure used to store a collection of elements. Each element in a linked list is stored in a node. 
Each node contains:
   - **Data**: The element's value.
   - **Pointer (or reference)**: Points to the next node in the list.

Unlike arrays, linked lists do not store elements in contiguous memory locations, making them dynamic in size.

---

## 2. Types of Linked Lists
1. **Singly Linked List**: Each node points to the next node only.
2. **Doubly Linked List**: Each node has pointers to both the next and previous nodes.
3. **Circular Linked List**: The last node points back to the first node, making a circular structure.

---

## 3. Basic Operations on Linked Lists
### a) Insertion
   - At the beginning
   - At the end
   - After a specific node

### b) Deletion
   - Remove the first node
   - Remove the last node
   - Remove a specific node

### c) Traversal
   - Go through each node and access its data.

---

## 4. Example Code in C++ (Singly Linked List)
This example demonstrates insertion and traversal in a singly linked list.

```cpp
#include <iostream>
using namespace std;

// Define a Node
struct Node {
    int data;
    Node* next;
};

// Insert at the beginning
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node(); // Create a new node
    newNode->data = data;       // Set data
    newNode->next = head;       // Point to the current head
    head = newNode;             // Update head to new node
}

// Insert at the end
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode; // If list is empty, new node is head
    } else {
        Node* temp = head;
        while (temp->next != nullptr) { // Traverse to last node
            temp = temp->next;
        }
        temp->next = newNode; // Attach new node
    }
}

// Traverse and print list
void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function to demonstrate
int main() {
    Node* head = nullptr; // Initialize empty list
    insertAtBeginning(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    traverse(head); // Expected Output: 10 -> 20 -> 30 -> NULL

    return 0;
}
```

---

## 5. Advanced Operations
### a) Searching for a Node by Value
   - Traverse the list and compare each node's data with the target value.
   - If found, return the node or its position; otherwise, return a message indicating it's not present.

Example (C++):
```cpp
bool search(Node* head, int target) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == target) {
            return true; // Value found
        }
        temp = temp->next;
    }
    return false; // Value not found
}
```

### b) Reversing a Linked List
   - To reverse a linked list, adjust the pointers so that each node points to its previous node.
   - Update the head pointer to the last node in the original list.

Example (C++):
```cpp
void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next; // Save the next node
        current->next = prev; // Reverse the pointer
        prev = current;       // Move prev to current
        current = next;       // Move to next node
    }
    head = prev; // Update head to the new first node
}
```

### c) Detecting and Removing Cycles (for Circular Linked Lists)
   - Use Floyd’s Cycle-Finding Algorithm (also known as the "Tortoise and Hare" method) to detect a cycle.
   - If detected, remove it by adjusting the pointers appropriately.

Example (C++):
```cpp
bool hasCycle(Node* head) {
    Node *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true; // Cycle found
    }
    return false; // No cycle
}
```

---

## 6. Memory Management and Node Deletion
It's important to free memory by deleting nodes to prevent memory leaks.

### a) Deleting a Specific Node
   - Locate the node to delete, update the previous node’s pointer, and free the memory.

Example (C++):
```cpp
void deleteNode(Node*& head, int target) {
    if (head == nullptr) return;
    Node* temp = head;
    if (head->data == target) {
        head = head->next;
        delete temp;
        return;
    }
    while (temp->next != nullptr && temp->next->data != target) {
        temp = temp->next;
    }
    if (temp->next == nullptr) return; // Node not found
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}
```

---

## 7. Examples for Different Types of Linked Lists
### a) Doubly Linked List (C++ Example)
   - Each node has a pointer to both the next and previous nodes.

```cpp
struct DNode {
    int data;
    DNode* next;
    DNode* prev;
};

// Insertion at the beginning of a doubly linked list
void insertAtBeginning(DNode*& head, int data) {
    DNode* newNode = new DNode();
    newNode->data = data;
    newNode->next = head;
    newNode->prev = nullptr;
    if (head != nullptr) head->prev = newNode;
    head = newNode;
}
```

### b) Circular Linked List (C++ Example)
   - The last node points back to the first node, forming a circular structure.

```cpp
void insertAtEndCircular(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head; // Point back to head
}
```

---

## 8. Linked List Applications
Linked lists are commonly used in:
   - Dynamic memory allocation.
   - Implementing data structures such as stacks, queues, and graphs.
   - Browser history, where back and forward navigation work as a linked list.
   - Undo functionality in text editors, where each action links to the previous one.

---
