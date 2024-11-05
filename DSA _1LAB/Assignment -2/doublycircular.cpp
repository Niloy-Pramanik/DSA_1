// #include <iostream>

// using namespace std;

// // Node structure for the doubly linked list
// struct Node {
//     int data;
//     Node* next;
//     Node* prev;
// };

// // Doubly Circular Sorted Linked List class
// class SortedLinkedList {
// private:
//     Node* dummy; // Dummy node to simplify insertion and deletion
//     int length;  // Current length of the list

// public:
//     // Constructor
//     SortedLinkedList() {
//         dummy = new Node();
//         dummy->next = dummy;
//         dummy->prev = dummy;
//         length = 0;
//     }

//     // Destructor to deallocate memory
//     ~SortedLinkedList() {
//         Node* curr = dummy->next;
//         while (curr != dummy) {
//             Node* temp = curr;
//             curr = curr->next;
//             delete temp;
//         }
//         delete dummy;
//     }

//     // Function to insert a node into the sorted position
//     void insert(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;

//         Node* curr = dummy->next;
//         while (curr != dummy && curr->data < value) {
//             curr = curr->next;
//         }

//         newNode->next = curr;
//         newNode->prev = curr->prev;
//         curr->prev->next = newNode;
//         curr->prev = newNode;

//         length++;
//     }

//     // Function to show all elements in the list
//     void showAll() {
//         Node* curr = dummy->next;
//         while (curr != dummy) {
//             cout << curr->data << " ";
//             curr = curr->next;
//         }
//         cout << endl;
//     }

//     // Function to search for a specific integer data
//     bool search(int value) {
//         Node* curr = dummy->next;
//         while (curr != dummy) {
//             if (curr->data == value) {
//                 return true;
//             }
//             curr = curr->next;
//         }
//         return false;
//     }

//     // Function to delete a node with given data
//     void remove(int value) {
//         Node* curr = dummy->next;
//         while (curr != dummy) {
//             if (curr->data == value) {
//                 curr->prev->next = curr->next;
//                 curr->next->prev = curr->prev;
//                 delete curr;
//                 length--;
//                 return;
//             }
//             curr = curr->next;
//         }
//     }

//     // Function to get the current length of the list
//     int getLength() {
//         return length;
//     }
// };

// int main() {
//     SortedLinkedList list;

//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; ++i) {
//         int value;
//         cin >> value;
//         list.insert(value);
//     }

//     cout << "All elements in the list: ";
//     list.showAll();

//     int searchValue;
//     cout << "Enter a value to search: ";
//     cin >> searchValue;
//     if (list.search(searchValue))
//         cout << "Value found" << endl;
//     else
//         cout << "Value not found" << endl;

//     int deleteValue;
//     cout << "Enter a value to delete: ";
//     cin >> deleteValue;
//     list.remove(deleteValue);

//     cout << "All elements in the list after deletion: ";
//     list.showAll();

//     return 0;
// }


#include <iostream>
using namespace std;

// Node structure for the doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

// Function to insert a node into the sorted position
void insert(Node* dummy, int value) {
    Node* newNode = createNode(value);

    Node* curr = dummy->next;
    while (curr != dummy && curr->data < value) {
        curr = curr->next;
    }

    newNode->next = curr;
    newNode->prev = curr->prev;
    curr->prev->next = newNode;
    curr->prev = newNode;
}

// Function to show all elements in the list
void showAll(Node* dummy) {
    Node* curr = dummy->next;
    while (curr != dummy) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Function to search for a specific integer data
bool search(Node* dummy, int value) {
    Node* curr = dummy->next;
    while (curr != dummy) {
        if (curr->data == value) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

// Function to delete a node with given data
void remove(Node* dummy, int value) {
    Node* curr = dummy->next;
    while (curr != dummy) {
        if (curr->data == value) {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
            return;
        }
        curr = curr->next;
    }
}

// Function to get the current length of the list
int getLength(Node* dummy) {
    int length = 0;
    Node* curr = dummy->next;
    while (curr != dummy) {
        length++;
        curr = curr->next;
    }
    return length;
}

int main() {
    Node* dummy = new Node();
    dummy->next = dummy;
    dummy->prev = dummy;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        insert(dummy, value);
    }

    cout << "All elements in the list: ";
    showAll(dummy);

    int searchValue;
    cout << "Enter a value to search: ";
    cin >> searchValue;
    if (search(dummy, searchValue))
        cout << "Value found" << endl;
    else
        cout << "Value not found" << endl;

    int deleteValue;
    cout << "Enter a value to delete: ";
    cin >> deleteValue;
    remove(dummy, deleteValue);

    cout << "All elements in the list after deletion: ";
    showAll(dummy);

    return 0;
}
