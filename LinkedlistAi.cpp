#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    
    cout << "Enter numbers and press 0 to exit: ";
    Node* head = nullptr;
    while (true) {
        int num;
        cin >> num;

        if (num == 0) break;

        Node* newnode = new Node{num,nullptr};

        if (head == nullptr) {
            head = newnode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newnode;
        }
    }

    // print the result 
    cout << "The list of numbers are: ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    

}