
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    int choice;

    cout << "=== Scientific Calculator ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Square Root\n";

    cout << "Choose an operation: ";
    if (!(cin >> choice) || choice < 1 || choice > 6) {
        cout << "Invalid operation!\n";
        return 1;
    }

    cout << "Enter first number: ";
    if (!(cin >> a)) {
        cout << "Invalid number!\n";
        return 1;
    }

    if (choice != 6) {
        cout << "Enter second number: ";
        if (!(cin >> b)) {
            cout << "Invalid number!\n";
            return 1;
        }
    }

    switch (choice) {
        case 1: cout << "Result: " << a + b; break;
        case 2: cout << "Result: " << a - b; break;
        case 3: cout << "Result: " << a * b; break;
        case 4:
            if (b != 0)
                cout << "Result: " << a / b;
            else
                cout << "Error: Division by zero!";
            break;
        case 5: cout << "Result: " << pow(a, b); break;
        case 6:
            if (a >= 0)
                cout << "Result: " << sqrt(a);
            else
                cout << "Error: Negative number!";
            break;
    }

    cout << endl;
    return 0;
}
