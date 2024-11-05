
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {
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

    void findMaxMin(int &maxNum, int &minNum) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        maxNum = head->data;
        minNum = head->data;
        Node* temp = head->next;
        while (temp != nullptr) {
            if (temp->data > maxNum) {
                maxNum = temp->data;
            }
            if (temp->data < minNum) {
                minNum = temp->data;
            }
            temp = temp->next;
        }
    }

    
    void findOddEven(int &oddCount, int &evenCount) {
        oddCount = 0;
        evenCount = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            temp = temp->next;
        }
    }

    
    int findSum() {
        int sum = 0;
        Node* temp = head;
        while (temp != nullptr) {
            sum += temp->data;
            temp = temp->next;
        }
        return sum;
    }

    
    bool search(int key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    LinkedList list;

    
    cout << "Do you want to add number? (-1 to stop):" << endl;
    int num;
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        list.insert(num);
    }

    int maxNum, minNum;
    list.findMaxMin(maxNum, minNum);
    cout << "Maximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;

    int oddCount, evenCount;
    list.findOddEven(oddCount, evenCount);
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;

    int sum = list.findSum();
    cout << "Sum of all numbers: " << sum << endl;

    int searchNum;
    cout << "Enter a number to search: ";
    cin >> searchNum;
    if (list.search(searchNum)) {
        cout << searchNum << " found in the list." << endl;
    } else {
        cout << searchNum << " not found in the list." << endl;
    }
    

    return 0;
}
