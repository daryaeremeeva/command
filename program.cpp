#include <iostream>
using namespace std;

int main() {
    int a, b, c, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "Sum=" << c;
        break;
    case 2:
        cout << "Sub=" << c;
        break;
    case 3:
        cout << "Mul=" << c;
        break;
    case 4:
        if (b != 0) {
            cout << "Div=" << c;
        }
        else {
            cout << "Error: Division by zero";
        }
        break;
    default:
        cout << "Invalid choice";
    }
    return 0;
}
