// #include <iostream>

// using namespace std;

// // Node structure for a doubly linked list
// struct ListNode {
//     int value;
//     ListNode* next;
//     ListNode* prev;
// };

// // Sorted Doubly Circular Linked List class
// class SortedCircularLinkedList {
// private:
//     ListNode* dummy; // Sentinel node for simplified insertion and deletion
//     int size;  // Current size of the list

// public:
//     // Constructor
//     SortedCircularLinkedList() {
//         dummy = new ListNode();
//         dummy->next = dummy;
//         dummy->prev = dummy;
//         size = 0;
//     }

//     // Destructor to deallocate memory
//     ~SortedCircularLinkedList() {
//         ListNode* current = dummy->next;
//         while (current != dummy) {
//             ListNode* temp = current;
//             current = current->next;
//             delete temp;
//         }
//         delete dummy;
//     }

//     // Function to insert a node into the sorted position
//     void insertNode(int val) {
//         ListNode* newNode = new ListNode();
//         newNode->value = val;

//         ListNode* current = dummy->next;
//         while (current != dummy && current->value < val) {
//             current = current->next;
//         }

//         newNode->next = current;
//         newNode->prev = current->prev;
//         current->prev->next = newNode;
//         current->prev = newNode;

//         size++;
//     }

//     // Function to display all elements in the list
//     void displayAll() {
//         ListNode* current = dummy->next;
//         while (current != dummy) {
//             cout << current->value << " ";
//             current = current->next;
//         }
//         cout << endl;
//     }

//     // Function to search for a specific integer value
//     bool searchValue(int val) {
//         ListNode* current = dummy->next;
//         while (current != dummy) {
//             if (current->value == val) {
//                 return true;
//             }
//             current = current->next;
//         }
//         return false;
//     }

//     // Function to delete a node with a given value
//     void deleteNode(int val) {
//         ListNode* current = dummy->next;
//         while (current != dummy) {
//             if (current->value == val) {
//                 current->prev->next = current->next;
//                 current->next->prev = current->prev;
//                 delete current;
//                 size--;
//                 return;
//             }
//             current = current->next;
//         }
//     }

//     // Function to get the current size of the list
//     int getSize() {
//         return size;
//     }
// };

// int main() {
//     SortedCircularLinkedList myList;

//     int numElements;
//     cout << "Enter the number of elements: ";
//     cin >> numElements;

//     cout << "Enter " << numElements << " elements:" << endl;
//     for (int i = 0; i < numElements; ++i) {
//         int value;
//         cin >> value;
//         myList.insertNode(value);
//     }

//     cout << "All elements in the list: ";
//     myList.displayAll();

//     int searchValue;
//     cout << "Enter a value to search: ";
//     cin >> searchValue;
//     if (myList.searchValue(searchValue))
//         cout << "Value found" << endl;
//     else
//         cout << "Value not found" << endl;

//     int deleteValue;
//     cout << "Enter a value to delete: ";
//     cin >> deleteValue;
//     myList.deleteNode(deleteValue);

//     cout << "All elements in the list after deletion: ";
//     myList.displayAll();

//     return 0;
// }
#include <iostream>

using namespace std;

// Node structure for a doubly linked list
struct ListNode {
    int value;
    ListNode* next;
    ListNode* prev;
};

// Function to create a new node
ListNode* createNode(int val) {
    ListNode* newNode = new ListNode();
    newNode->value = val;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

// Function to insert a node into the sorted position
void insertNode(ListNode*& dummy, int val) {
    ListNode* newNode = createNode(val);

    ListNode* current = dummy->next;
    while (current != dummy && current->value < val) {
        current = current->next;
    }

    newNode->next = current;
    newNode->prev = current->prev;
    current->prev->next = newNode;
    current->prev = newNode;
}

// Function to display all elements in the list
void displayAll(ListNode* dummy) {
    ListNode* current = dummy->next;
    while (current != dummy) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to search for a specific integer value
bool searchValue(ListNode* dummy, int val) {
    ListNode* current = dummy->next;
    while (current != dummy) {
        if (current->value == val) {
            return true;
        }
        current = current->next;
    }
    return false;
}

// Function to delete a node with a given value
void deleteNode(ListNode*& dummy, int val) {
    ListNode* current = dummy->next;
    while (current != dummy) {
        if (current->value == val) {
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            return;
        }
        current = current->next;
    }
}

// Function to deallocate memory for the list
void deleteList(ListNode*& dummy) {
    ListNode* current = dummy->next;
    while (current != dummy) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    delete dummy;
}

int main() {
    ListNode* dummy = createNode(-1); // Sentinel node
    int size = 0;

    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    cout << "Enter " << numElements << " elements:" << endl;
    for (int i = 0; i < numElements; ++i) {
        int value;
        cin >> value;
        insertNode(dummy, value);
        size++;
    }

    cout << "All elements in the list: ";
    displayAll(dummy);

    int searchValue;
    cout << "Enter a value to search: ";
    cin >> searchValue;
    if (searchValue(dummy, searchValue))
        cout << "Value found" << endl;
    else
        cout << "Value not found" << endl;

    int deleteValue;
    cout << "Enter a value to delete: ";
    cin >> deleteValue;
    deleteNode(dummy, deleteValue);
    size--;

    cout << "All elements in the list after deletion: ";
    displayAll(dummy);

    // Deallocate memory for the list
    deleteList(dummy);

    return 0;
}
