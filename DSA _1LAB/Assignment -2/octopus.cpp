#include <iostream>
#include <unordered_map>
#include <string>
#include<climits>

using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Octopus {
    unordered_map<string, Node*> lists;
    unordered_map<string, int> sums;
};

void insertNode(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void processCommand(Octopus& octopus, string command, int value) {
    insertNode(octopus.lists[command], value);
    octopus.sums[command] += value;
}

string getMaxSumList(const Octopus& octopus) {
    string maxList = "";
    int maxSum = INT_MIN;

    for (const auto& it : octopus.sums) {
        if (it.second > maxSum) {
            maxSum = it.second;
            maxList = it.first;
        }
    }

    if (maxList == "L")
        return "Left Link List Has Maximum Sum " + to_string(maxSum);
    else if (maxList == "R")
        return "Right Link List Has Maximum Sum " + to_string(maxSum);
    else if (maxList == "T")
        return "Top Link List Has Maximum Sum " + to_string(maxSum);
    else if (maxList == "B")
        return "Bottom Link List Has Maximum Sum " + to_string(maxSum);

    return ""; // Handling for invalid cases
}

int main() {
    int n;
    cin >> n;

    Octopus octopus;

    for (int i = 0; i < n; ++i) {
        string command;
        int value;
        cin >> command >> value;
        processCommand(octopus, command, value);
    }

    cout << getMaxSumList(octopus) << endl;

    return 0;
}

// #include <iostream>
// #include <unordered_map>
// #include <string>
// #include <climits>

// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// struct Octopus {
//     unordered_map<string, Node*> lists;
//     unordered_map<string, int> sums;
// };

// // Function to insert a node at the end of the linked list
// void insertNode(Node*& head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = nullptr;

//     if (!head)
//         head = newNode;
//     else {
//         Node* curr = head;
//         while (curr->next)
//             curr = curr->next;
//         curr->next = newNode;
//     }
// }

// // Function to process a command and update the octopus data
// void processCommand(Octopus& octopus, string command, int value) {
//     insertNode(octopus.lists[command], value);
//     octopus.sums[command] += value;
// }

// // Function to find the list with the maximum sum
// string getMaxSumList(const Octopus& octopus) {
//     string maxList = "";
//     int maxSum = INT_MIN;

//     for (const auto& it : octopus.sums) {
//         if (it.second > maxSum) {
//             maxSum = it.second;
//             maxList = it.first;
//         }
//     }

//     string listNames[] = {"Left", "Right", "Top", "Bottom"};
//     return listNames[maxList[0] - 'L'] + " Link List Has Maximum Sum " + to_string(maxSum);
// }

// int main() {
//     int n;
//     cin >> n;

//     Octopus octopus;

//     for (int i = 0; i < n; ++i) {
//         string command;
//         int value;
//         cin >> command >> value;
//         processCommand(octopus, command, value);
//     }

//     cout << getMaxSumList(octopus) << endl;

//     return 0;
// }


