#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayLeftToRight(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void displayRightToLeft(Node* head) {
    if (head == nullptr)
        return;
    displayRightToLeft(head->next);
    cout << head->data << " ";
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= i*i; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}


void separatePrimes(Node*& A, Node*& P, Node*& NP) {
    Node* temp = A;
    while (temp != nullptr) {
        if (isPrime(temp->data)) {
            insertNode(P, temp->data);
        } else {
            insertNode(NP, temp->data);
        }
        Node* prev= temp;
        temp = temp->next;
        delete prev;
    }
    A=nullptr;
}
//Function to insert node in sorted order
void insertSorted(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr || head->data > value) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && current->next->data < value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to create a sorted prime list
Node* createSortedPrimeList(Node* P) {
    Node* SP = nullptr;
    while (P != nullptr) {
        insertSorted(SP, P->data);
        Node* prev = P;
        P = P->next;
        delete prev;
    }
    return SP;
}

int main(){
    
    Node* A = nullptr; 
    Node* P = nullptr; 
    Node* NP = nullptr;
    
    
    for (int i = 0; i < 100; ++i) {
        insertNode(A, rand() % 1000);
    }
    
    cout << "(Left to Right): ";
    displayLeftToRight(A);
    
    cout << "(Right to Left): ";
    displayRightToLeft(A);
    cout << endl;
    
    separatePrimes(A, P, NP);
    

    cout << "Prime Numbers (P): ";
    displayLeftToRight(P);

    cout << "Non-Prime Numbers (NP): ";
    displayLeftToRight(NP);
    
    Node* SP = createSortedPrimeList(P);
    
    
    cout << "Sorted Prime Numbers (SP): ";
    displayLeftToRight (SP);
    
    return 0;
}






