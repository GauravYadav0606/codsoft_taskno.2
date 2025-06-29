#include <iostream>
using namespace std;

int main() {
    double a, b, ans;
    char op;

    cout << "------ Simple Calculator ------\n";
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nResult: ";

    switch (op) {
        case '+':
            ans = a + b;
            cout << ans;
            break;
        case '-':
            ans = a - b;
            cout << ans;
            break;
        case '*':
            ans = a * b;
            cout << ans;
            break;
        case '/':
            if (b != 0) {
                ans = a / b;
                cout << ans;
            } else {
                cout << "Error: Cannot divide by zero!";
            }
            break;
        default:
            cout << "Invalid operator!";
    }
    return 0;
}
