// #include <iostream>
// #include <cstdlib>
// #include <cmath>

// using namespace std;

// // Node structure for linked list
// struct Node {
//     int data;
//     Node* next;
// };

// // Function to insert a node at the end of a linked list
// void insertNode(Node*& head, int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode->next = nullptr;
    
//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// // Function to display linked list from left to right
// void displayLeftToRight(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Function to display linked list from right to left
// void displayRightToLeft(Node* head) {
//     if (head == nullptr)
//         return;
//     displayRightToLeft(head->next);
//     cout << head->data << " ";
// }

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1)
//         return false;
//     for (int i = 2; i <= sqrt(num); ++i) {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

// // Function to separate prime and non-prime integers into two separate linked lists
// void separatePrimes(Node*& A, Node*& P, Node*& NP) {
//     Node* temp = A;
//     while (temp != nullptr) {
//         if (isPrime(temp->data)) {
//             insertNode(P, temp->data);
//         } else {
//             insertNode(NP, temp->data);
//         }
//         Node* prev = temp;
//         temp = temp->next;
//         delete prev;
//     }
//     A = nullptr;
// }

// // Function to insert node in sorted order
// void insertSorted(Node*& head, int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode->next = nullptr;

//     if (head == nullptr || head->data > value) {
//         newNode->next = head;
//         head = newNode;
//     } else {
//         Node* current = head;
//         while (current->next != nullptr && current->next->data < value) {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//     }
// }

// // Function to create a sorted prime list
// Node* createSortedPrimeList(Node* P) {
//     Node* SP = nullptr;
//     while (P != nullptr) {
//         insertSorted(SP, P->data);
//         Node* prev = P;
//         P = P->next;
//         delete prev;
//     }
//     return SP;
// }

// int main() {
//     Node* A = nullptr; // Linked list A
//     Node* P = nullptr; // Linked list for prime numbers
//     Node* NP = nullptr; // Linked list for non-prime numbers
    
//     // Generate and insert 100 random integers into linked list A
//     for (int i = 0; i < 100; ++i) {
//         insertNode(A, rand() % 1000);
//     }
    
//     // Display A from left to right
//     cout << "A (Left to Right): ";
//     displayLeftToRight(A);
    
//     // Display A from right to left
//     cout << "A (Right to Left): ";
//     displayRightToLeft(A);
//     cout << endl;
    
//     // Separate prime and non-prime numbers into P and NP respectively
//     separatePrimes(A, P, NP);
    
//     // Display linked list P (prime numbers)
//     cout << "Prime Numbers (P): ";
//     displayLeftToRight(P);
    
//     // Display linked list NP (non-prime numbers)
//     cout << "Non-Prime Numbers (NP): ";
//     displayLeftToRight(NP);
    
//     // Create sorted prime list SP from P
//     Node* SP = createSortedPrimeList(P);
    
//     // Display sorted prime list SP
//     cout << "Sorted Prime Numbers (SP): ";
//     displayLeftToRight(SP);
    
//     return 0;
// }
