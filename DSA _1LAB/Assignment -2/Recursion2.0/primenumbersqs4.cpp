#include<iostream>
using namespace std;

bool primeChecker(int n, int i) {
    if (n <= 1)
        return false;
    if (i * i > n)
        return true;
    if (n % i == 0)
        return false;
    return primeChecker(n, i + 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (primeChecker(num, 2))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
