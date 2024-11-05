#include <iostream>
#include <limits>

struct Node {
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) 
};

class LinkedList {
public:
  
    void insertAtHead(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

   
    void findMinMax() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        int maxVal = INT_MIN, minVal = INT_MAX;
        Node* temp = head;
        while (temp != nullptr) {
            maxVal = std::max(maxVal, temp->data);
            minVal = std::min(minVal, temp->data);
            temp = temp->next;
        }

        std::cout << "Maximum number: " << maxVal << "\n";
        std::cout << "Minimum number: " << minVal << "\n";
    }

   
    int findSum() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return 0;
        }

        int sum = 0;
        Node* temp = head;
        while (temp != nullptr) {
            sum += temp->data;
            temp = temp->next;
        }

        return sum;
    }

    
    int search(int element) {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return -1;
        }

        int index = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == element) {
                return index;
            }
            index++;
            temp = temp->next;
        }

        return -1; 
    }

   
    void countEvenOdd() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        int evenCount = 0, oddCount = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            temp = temp->next;
        }

        std::cout << "Number of even nodes: " << evenCount << "\n";
        std::cout << "Number of odd nodes: " << oddCount << "\n";
    }

private:
    Node* head = nullptr;
};

int main() {
    LinkedList list;
    list.insertAtHead(5);
    list.insertAtHead(3);
    list.insertAtHead(7);
    list.insertAtHead(2);
    list.insertAtHead(4);

    list.findMinMax();

    int sum = list.findSum();
    std::cout << "Sum of all numbers: " << sum << "\n";

    
    int element = 4;
    int index = list.search(element);
    if (index != -1) {
        std::cout << "Element " << element << " found at index: " << index << "\n";
    } else {
        std::cout << "Element not found.\n";
    }

    
    list.countEvenOdd();

    return 0;
}
