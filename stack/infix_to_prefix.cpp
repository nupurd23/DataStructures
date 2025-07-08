#include <iostream>
#include <stack>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Function to check if character is operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top(); st.pop();
            }
            st.pop(); // remove '('
        }
        else { // operator
            while (!st.empty() && precedence(c) <= precedence(st.top())) {
                postfix += st.top(); st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top(); st.pop();
    }

    return postfix;
}

// Main function to convert infix to prefix
string infixToPrefix(string infix) {
    // Step 1: Reverse infix
    reverse(infix.begin(), infix.end());

    // Step 2: Swap '(' with ')' and vice versa
    for (char &c : infix) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }

    // Step 3: Get postfix of modified expression
    string postfix = infixToPostfix(infix);

    // Step 4: Reverse postfix to get prefix
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
