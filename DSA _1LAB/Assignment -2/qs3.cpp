// #include <iostream>
// #include <string>

// using namespace std;

// // Node structure for the doubly linked list
// struct Node {
//     int key;
//     Node* next;
//     Node* prev;
// };

// // Doubly linked list class
// class DoublyLinkedList {
// private:
//     Node* dummy; // Dummy node
// public:
//     // Constructor
//     DoublyLinkedList() {
//         dummy = new Node();
//         dummy->next = dummy;
//         dummy->prev = dummy;
//     }

//     // Destructor
//     ~DoublyLinkedList() {
//         Node* current = dummy->next;
//         while (current != dummy) {
//             Node* temp = current;
//             current = current->next;
//             delete temp;
//         }
//         delete dummy;
//     }

//     // Function to insert a node x after node y
//     void insertNode(int keyX, int keyY) {
//         Node* newNode = new Node();
//         newNode->key = keyX;

//         Node* current = dummy->next;
//         while (current != dummy) {
//             if (current->key == keyY) {
//                 newNode->next = current->next;
//                 newNode->prev = current;
//                 current->next->prev = newNode;
//                 current->next = newNode;
//                 cout << "INSERT after " << keyY << "." << endl;
//                 return;
//             }
//             current = current->next;
//         }

//         // If node y is not found, insert after dummy node
//         newNode->next = dummy->next;
//         newNode->prev = dummy;
//         dummy->next->prev = newNode;
//         dummy->next = newNode;
//         cout << "INSERT after dummy node." << endl;
//     }

//     // Function to delete a node with a given key
//     void deleteNode(int key) {
//         Node* current = dummy->next;
//         while (current != dummy) {
//             if (current->key == key) {
//                 current->prev->next = current->next;
//                 current->next->prev = current->prev;
//                 delete current;
//                 cout << "Node with key value " << key << " is DELETED." << endl;
//                 return;
//             }
//             current = current->next;
//         }
//         cout << "DELETE not possible." << endl;
//     }

//     // Function to search for a key in the linked list
//     void search(int searchKey) {
//         Node* current = dummy->next;
//         while (current != dummy) {
//             if (current->key == searchKey) {
//                 cout << "Node with key value " << searchKey << " is FOUND." << endl;
//                 return;
//             }
//             current = current->next;
//         }
//         cout << "Not FOUND." << endl;
//     }

//     // Function to display all key values in the linked list
//     void showAll() {
//         Node* current = dummy->next;
//         while (current != dummy) {
//             cout << current->key << " ";
//             current = current->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     DoublyLinkedList list;

//     string command;
//     int keyX, keyY;

//     while (true) {
//         cout << "Enter command: ";
//         cin >> command;

//         if (command == "ins") {
//             cin >> keyX >> keyY;
//             list.insertNode(keyX, keyY);
//         } else if (command == "del") {
//             cin >> keyX;
//             list.deleteNode(keyX);
//         } else if (command == "sch") {
//             cin >> keyX;
//             list.search(keyX);
//         } else if (command == "shw") {
//             list.showAll();
//         } else if (command == "ext") {
//             cout << "Exiting the program." << endl;
//             break;
//         } else {
//             cout << "Invalid command. Please try again." << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

// Node structure for the doubly linked list
struct Node {
   int key;
   Node* next;
   Node* prev;
};

// Function to create a new node
Node* createNode(int key) {
    Node* newNode = new Node();
    newNode->key = key;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

// Function to insert a node x after node y
void insertNode(Node*& dummy, int keyX, int keyY) {
    Node* newNode = createNode(keyX);

    Node* current = dummy->next;
    while (current != dummy) {
        if (current->key == keyY) {
            newNode->next = current->next;
            newNode->prev = current;
            current->next->prev = newNode;
            current->next = newNode;
            cout << "INSERT after " << keyY << "." << endl;
            return;
        }
        current = current->next;
    }

    // If node y is not found, insert after dummy node
    newNode->next = dummy->next;
    newNode->prev = dummy;
    dummy->next->prev = newNode;
    dummy->next = newNode;
    cout << "INSERT after dummy node." << endl;
}

// Function to delete a node with a given key
void deleteNode(Node*& dummy, int key) {
    Node* current = dummy->next;
    while (current != dummy) {
        if (current->key == key) {
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            cout << "Node with key value " << key << " is DELETED." << endl;
            return;
        }
        current = current->next;
    }
    cout << "DELETE not possible." << endl;
}

// Function to search for a key in the linked list
void search(Node* dummy, int searchKey) {
    Node* current = dummy->next;
    while (current != dummy) {
        if (current->key == searchKey) {
            cout << "Node with key value " << searchKey << " is FOUND." << endl;
            return;
        }
        current = current->next;
    }
    cout << "Not FOUND." << endl;
}

// Function to display all key values in the linked list
void showAll(Node* dummy) {
    Node* current = dummy->next;
    while (current != dummy) {
        cout << current->key << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to delete all nodes and deallocate memory
void deleteList(Node*& dummy) {
    Node* current = dummy->next;
    while (current != dummy) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    delete dummy;
}

int main() {
    Node* dummy = createNode(-1); // Dummy node

    string command;
    int keyX, keyY;

    while (true) {
        cout << "Enter command: ";
        cin >> command;

        if (command == "ins") {
            cin >> keyX >> keyY;
            insertNode(dummy, keyX, keyY);
        } else if (command == "del") {
            cin >> keyX;
            deleteNode(dummy, keyX);
        } else if (command == "sch") {
            cin >> keyX;
            search(dummy, keyX);
        } else if (command == "shw") {
            showAll(dummy);
        } else if (command == "ext") {
            cout << "Exiting the program." << endl;
            deleteList(dummy);
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    return 0;
}
