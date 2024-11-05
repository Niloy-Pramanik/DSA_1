// #include <iostream>
// #include <string>

// using namespace std;

// // Node structure for the linked list
// struct Node {
//     char data;
//     int freq;
//     Node* next;
    
//     Node(char c) : data(c), freq(0), next(nullptr) {}
// };

// // Function to insert a node into the linked list in ascending order
// void insert(Node*& head, char data) {
//     Node* newNode = new Node(data);
//     if (!head || head->data >= data) {
//         newNode->next = head;
//         head = newNode;
//     } else {
//         Node* current = head;
//         while (current->next && current->next->data < data) {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//     }
// }

// // Function to update the frequency count for each occurrence of alphabets in the given string
// void updateFrequency(Node* head, const string& str) {#include <iostream>
// #include <string>

// using namespace std;

// // Node structure for the linked list
// struct Node {
//     char data;
//     int frequency;
//     Node* next;
    
//     Node(char c) : data(c), frequency(0), next(nullptr) {}
// };

// // Function to insert a node into the linked list in ascending order
// void insert(Node*& head, char data) {
//     Node* newNode = new Node(data);
//     if (!head || head->data >= data) {
//         newNode->next = head;
//         head = newNode;
//     } else {
//         Node* current = head;
//         while (current->next && current->next->data < data) {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//     }
// }

// // Function to update the frequency count for each occurrence of alphabets in the given string
// void updateFrequency(Node* head, const string& str) {
//     for (char c : str) {
//         Node* current = head;
//         while (current && current->data != c) {
//             current = current->next;
//         }
//         if (current) {
//             current->frequency++;
//         }
//     }
// }

// // Function to traverse the list and print each alphabet with its frequency
// void printList(Node* head) {
//     Node* current = head;
//     while (current) {
//         cout << current->data << ": " << current->frequency << endl;
//         current = current->next;
//     }
// }

// int main() {
//     // Create a linked list for the English alphabets
//     Node* head = nullptr;
//     for (char c = 'a'; c <= 'z'; ++c) {
//         insert(head, c);
//     }
    
//     // Input string
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;
    
//     // Update frequency counts
//     updateFrequency(head, input);
    
//     // Print updated list
//     cout << "Updated frequency counts:" << endl;
//     printList(head);
    
//     return 0;
// }

//     for (char c : str) {
//         Node* current = head;
//         while (current && current->data != c) {
//             current = current->next;
//         }
//         if (current) {
//             current->freq++;
//         }
//     }
// }

// // Function to traverse the list and print each alphabet with its frequency
// void printList(Node* head) {
//     Node* current = head;
//     while (current) {
//         cout << current->data << ": " << current->freq << endl;
//         current = current->next;
//     }
// }

// int main() {
//     // Create a linked list for the English alphabets
//     Node* head = nullptr;
//     for (char c = 'a'; c <= 'z'; ++c) {
//         insert(head, c);
//     }
    
//     // Input string
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;
    
//     // Update frequency counts
//     updateFrequency(head, input);
    
//     // Print updated list
//     cout << "Updated frequency counts:" << endl;
//     printList(head);
    
//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

struct Node {
    char data;
    int frequency;
    Node* next;
    
    Node(char c) : data(c), frequency(0), next(nullptr) {}
};

// Function to insert 
void insert(Node*& head, char data) {
    Node* newNode = new Node(data);
    if (!head || head->data >= data) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to update 
void updateFrequency(Node* head, const string& str) {
    for (int i = 0; i < str.length(); ++i) {
        char c = str[i];
        Node* current = head;
        while (current && current->data != c) {
            current = current->next;
        }
        if (current) {
            current->frequency++;
        }
    }
}

// Function to traverse 
void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << ": " << current->frequency << endl;
        current = current->next;
    }
}

int main() {
    // Create a linked list for the English alphabets
    Node* head = nullptr;
    for (char c = 'a'; c <= 'z'; ++c) {
        insert(head, c);
    }
    
    // Input string
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    // Update frequency counts
    updateFrequency(head, input);
    
    // Print updated list
    cout << "Updated frequency counts:" << endl;
    printList(head);
    
    return 0;
}


