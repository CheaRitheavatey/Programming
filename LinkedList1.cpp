#include <iostream>

using namespace std;



// Node structure for the linked list

struct Node {

    int data;

    Node* next;

};



int main() {

    Node* head = nullptr; // Start with an empty list



    cout << "Enter numbers to add to the list (type 0 to stop):" << endl;

    while (true) {

        int num;

        cin >> num;



        if (num == 0) break; // Stop input when 0 is entered



        // Create a new node for the number

        Node* newNode = new Node{num, nullptr};



        // Add the new node to the front of the list

        newNode->next = head;

        head = newNode;

    }



    // Print the linked list

    cout << "The numbers in the list are: ";

    Node* current = head;

    while (current != nullptr) {

        cout << current->data << " ";

        current = current->next;

    }

    cout << endl;



    // Free the memory used by the list

    current = head;

    while (current != nullptr) {

        Node* temp = current;

        current = current->next;

        delete temp;

    }



    return 0;

}