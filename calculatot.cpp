#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n===== SIMPLE CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;

        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result = " << pow(a, b) << endl;
            break;

        case 6:
            cout << "Enter number: ";
            cin >> a;
            if (a >= 0)
                cout << "Result = " << sqrt(a) << endl;
            else
                cout << "Error: Negative number!" << endl;
            break;

        case 0:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}