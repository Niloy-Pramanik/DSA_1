#include <iostream>
using namespace std;

struct Node {
    int c;
    int power;
    struct Node* next;
};

void insert(int a, int b, struct Node** tempNode) {
    struct Node *n, *m;
    m = *tempNode;
    if (m == NULL) {
        n = new Node;
        n->c = a;
        n->power = b;
        *tempNode = n;
        n->next = new Node;
        n = n->next;
        n->next = NULL;
    } else {
        n->c = a;
        n->power = b;
        n->next = new Node;
        n = n->next;
        n->next = NULL;
    }
}

void addingPolynomials(struct Node* pol1, struct Node* pol2, struct Node* polynomial) {
    while (pol1->next && pol2->next) {
        if (pol1->power > pol2->power) {
            polynomial->power = pol1->power;
            polynomial->c = pol1->c;
            pol1 = pol1->next;
        } else if (pol1->power < pol2->power) {
            polynomial->power = pol2->power;
            polynomial->c = pol2->c;
            pol2 = pol2->next;
        } else {
            polynomial->power = pol1->power;
            polynomial->c = pol1->c + pol2->c;
            pol1 = pol1->next;
            pol2 = pol2->next;
        }
        polynomial->next = new Node;
        polynomial = polynomial->next;
        polynomial->next = NULL;
    }
    while (pol1->next || pol2->next) {
        if (pol1->next) {
            polynomial->power = pol1->power;
            polynomial->c = pol1->c;
            pol1 = pol1->next;
        }
        if (pol2->next) {
            polynomial->power = pol2->power;
            polynomial->c = pol2->c;
            pol2 = pol2->next;
        }
        polynomial->next = new Node;
        polynomial = polynomial->next;
        polynomial->next = NULL;
    }
}

void DisplayList(struct Node* newNode) {
    while (newNode->next != NULL) {
        cout << newNode->c << "x^" << newNode->power;
        newNode = newNode->next;
        if (newNode->c >= 0 && newNode->next != NULL)
            cout << "+";
    }
}

int main() {
    struct Node *pol1 = NULL, *pol2 = NULL, *polynomialFinal = NULL;

    // The first list as per the question is 5x3+2x2+3x+4
    insert(5, 3, &pol1);
    insert(2, 2, &pol1);
    insert(3, 1, &pol1);
    insert(4, 0, &pol1);

    // The second linked list as per the question is 4x2+3
    insert(4, 2, &pol2);
    insert(3, 0, &pol2);

    cout << "First Polynomial Number: ";
    DisplayList(pol1);

    cout << "\nSecond Polynomial Number: ";
    DisplayList(pol2);

    polynomialFinal = new Node;

    addingPolynomials(pol1, pol2, polynomialFinal);

    cout << "\nSum of the polynomials: ";
    DisplayList(polynomialFinal);

    return 0;
}
