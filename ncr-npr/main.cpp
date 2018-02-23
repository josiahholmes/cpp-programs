#include <iostream>
#include <string>
using namespace std;


void npr(int a, int b);
void ncr(int a, int b);
int factorial(int a);

int main() {
    int firstNum, secondNum;
    char choice, restart;

    do {
        cout << "Enter 'P/p' for permutation, or 'C/c' for combination: ";
        cin >> choice;

        if ((choice != 'P') && (choice != 'C') && (choice != 'p') && (choice != 'c')) {
            cout << "Choice must be: P, p, C, or c!\n";
            break;
        }

        cout << "Enter your first number: ";
        cin >> firstNum;

        cout << "Enter your second number: ";
        cin >> secondNum;

        if (firstNum < secondNum) { 
            cout << "First number must be greater than or equal to second number!\n";
            return 1;
        }

        switch (choice) {
            case 'P': 
                npr(firstNum, secondNum);
                break;
            case 'C':
                ncr(firstNum, secondNum);
                break;
            case 'p': 
                npr(firstNum, secondNum);
                break;
            case 'c':
                ncr(firstNum, secondNum);
                break;
        }

        cout << "Restart? Y/N: ";
        cin >> restart;

    } while (restart != 'N');

    cout << "End of program!\n";
    return 0;
}

void npr(int a, int b) {
    int npr = factorial(a) / factorial(a - b);
    cout << "The permutation of " << a << " and " << b << " is: " << npr << "\n";
}

void ncr(int a, int b) {
    int ncr = factorial(a) / (factorial(b) * factorial(a - b));
    cout << "The combination of " << a << " and " << b << " is: " << ncr << "\n";
}

int factorial(int a) {
    if (a == 0) return 1;
    if (a == 1) return 1;
    else return a * factorial(a - 1);
}