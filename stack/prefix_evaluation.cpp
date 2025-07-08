#include <iostream>
#include <stack>
#include <cmath>    // for pow()
#include <cctype>   // for isdigit()
using namespace std;

// Function to perform arithmetic operations
int evaluate(int op1, int op2, char op) {
    switch (op) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        case '^': return pow(op1, op2);
        default : return 0;
    }
}

// Function to evaluate prefix expression
int evaluatePrefix(string expr) {
    stack<int> st;

    // Scan from right to left
    for (int i = expr.length() - 1; i >= 0; i--) {
        char c = expr[i];

        if (isdigit(c)) {
            st.push(c - '0'); // convert char to int
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            int op1 = st.top(); st.pop();
            int op2 = st.top(); st.pop();
            int result = evaluate(op1, op2, c);
            st.push(result);
        }
    }

    return st.top();
}

int main() {
    string prefix;
    cout << "Enter prefix expression (single-digit operands): ";
    cin >> prefix;

    int result = evaluatePrefix(prefix);
    cout << "Result: " << result << endl;

    return 0;
}
