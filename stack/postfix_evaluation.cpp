#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
using namespace std;

// Function to perform an operation on two operands
int applyOperation(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b; // assumes b ≠ 0
        case '^': return pow(a, b);
        default: return 0;
    }
}

// Function to evaluate postfix expression
int evaluatePostfix(const string& postfix) {
    stack<int> s;
    stringstream ss(postfix);
    string token;

    while (ss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && isdigit(token[1]))) {
            // If it's a number (including negative)
            s.push(stoi(token));
        } else if (token.length() == 1 && string("+-*/^").find(token) != string::npos) {
            // Operator
            if (s.size() < 2) {
                cout << "Invalid expression\n";
                return -1;
            }
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(applyOperation(a, b, token[0]));
        } else {
            cout << "Invalid token: " << token << endl;
            return -1;
        }
    }

    if (s.size() != 1) {
        cout << "Invalid expression\n";
        return -1;
    }

    return s.top();
}
int main() {
    string postfix;
    cout << "Enter postfix expression (tokens separated by space): ";
    getline(cin, postfix);

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
