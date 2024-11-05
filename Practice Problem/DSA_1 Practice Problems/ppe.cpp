// #include <iostream>
// #include <stack>
// //#include<queue>
// #include <cctype>

// using namespace std;

// void processString(const string& input) {
//     stack<char> charStack;

//     for (char c : input) {
//         if (isalpha(c)) { // If character is an alphabet
//             charStack.push(c);
//         } else if (isdigit(c)) { // If character is a digit
//             if (!charStack.empty()) {
//                 cout << charStack.top();
//                 charStack.pop();
//             }
//         }
//     }

//     cout << endl;
// }

// int main() {
//     string input1 = "AB1D#$E69Z9A0KMN";
//     string input2 = "nbmASgjash%U^&1971";

//     cout << "Output 1: ";
//     processString(input1);

//     cout << "Output 2: ";
//     processString(input2);

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std; 

// int maxSumFromStack(vector<int>& stack, int N, int K) { 

//     vector<int> queue(stack.rbegin(), stack.rend()); 
//     int sum = 0;
//     for(int i = 0; i < K; ++i) { 
//         sum += queue.back();
//         queue.pop_back(); 
//     }
//     return sum;

// }

// int main() {
//     int N = 10;
//     int K = 5;

//     vector<int> stack = {10, 9, 1, 2, 3, 4, 5, 6, 7, 8};
//     int result = maxSumFromStack(stack, N, K);
//     cout << result << endl;

//     return 0;
// }