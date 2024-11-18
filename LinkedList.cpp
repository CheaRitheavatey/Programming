#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node
};


int main() {
    // Create three nodes
    Node* first = new Node{1, nullptr}; // First node with data 1
    Node* second = new Node{2, nullptr}; // Second node with data 2
    Node* third = new Node{3, nullptr}; // Third node with data 3
    Node* fourth = new Node{4, nullptr};

    // Link the nodes together
    first->next = second;
    second->next = third;
    third->next = fourth;

    // Traverse and print the linked list
    Node* current = first;
    cout << "Linked list elements: ";

    while (current != nullptr) {
        cout << current->data << " "; // Print current node's data
        current = current->next;     // Move to the next node
    }
    cout << endl;
    // Free the memory
    delete first;
    delete second;
    delete third;
    delete fourth;



    return 0;

}


