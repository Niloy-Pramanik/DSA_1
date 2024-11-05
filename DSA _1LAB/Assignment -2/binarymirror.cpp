#include <iostream>

using namespace std;

// Node structure for a singly linked list
struct Node {
    char pixel; // '0' for black, '.' for white
    int count;  // Number of consecutive pixels of the same color
    Node* next; // Pointer to the next node
};

// Function to insert a node after the dummy node of a row
void insertNode(Node*& dummy, char pixel, int count) {
    Node* newNode = new Node();
    newNode->pixel = pixel;
    newNode->count = count;
    newNode->next = dummy->next;
    dummy->next = newNode;
}

// Function to print the mirror image of the binary image
void printMirrorImage(Node*& dummy) {
    Node* currentRow = dummy->next;
    while (currentRow != nullptr) {
        Node* currentNode = currentRow->next;
        while (currentNode != nullptr) {
            for (int i = 0; i < currentNode->count; ++i) {
                cout << currentNode->pixel;
            }
            currentNode = currentNode->next;
        }
        cout << endl;
        currentRow = currentRow->next;
    }
}

int main() {
    // Initialize dummy node for the first row
    Node* dummyFirstRow = new Node();
    dummyFirstRow->next = nullptr;

    // Input binary image
    string binaryImage;
    cout << "Enter the binary image: ";
    cin >> binaryImage;

    // Initialize variables for tracking consecutive pixels
    char prevPixel = '.';
    int count = 0;

    // Process the binary image
    for (char pixel : binaryImage) {
        if (pixel == prevPixel) {
            // Increment count for consecutive pixels of the same color
            ++count;
        } else {
            // Insert node after the dummy node for the current row
            insertNode(dummyFirstRow, prevPixel, count);
            // Update variables for the new pixel
            prevPixel = pixel;
            count = 1;
        }
    }
    // Insert the last node for the current row
    insertNode(dummyFirstRow, prevPixel, count);

    // Print the mirror image
    cout << "Mirror image:" << endl;
    printMirrorImage(dummyFirstRow);

    // Free memory allocated for nodes
    Node* currentRow = dummyFirstRow;
    while (currentRow != nullptr) {
        Node* nextRow = currentRow->next;
        Node* currentNode = currentRow;
        while (currentNode != nullptr) {
            Node* nextNode = currentNode->next;
            delete currentNode;
            currentNode = nextNode;
        }
        currentRow = nextRow;
    }

    return 0;
}
