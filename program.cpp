#include <iostream>
#include "funcs.h"
using namespace std;

int main() {
    int a, b, c, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice;
    switch (choice) {
    case Sum:
        result = sum(a, b);
        break;
    case Sub:
        result = sub(a, b);
        break;
    case Mul:
        result = mul(a, b);
        break;
    case Div:
        result = div(a, b);
        break;
    default:
        cout << "Error: wrong number of function\n";
        return 1;
    }

    // result
    cout << "result: " << result << endl;

    return 0;
}

