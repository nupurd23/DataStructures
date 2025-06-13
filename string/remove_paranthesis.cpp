#include <iostream>
#include <string>
using namespace std;

string removeOuterParentheses(string s) {
    string result = ""; // This will store the final answer
    int count = 0;      // This keeps track of how deep we are in the parentheses

    for (char ch : s) {         // Go through each character in the input string
        if (ch == '(') {
            if (count > 0) {    // If we are already inside, add '(' to result
                result += ch;
            }
            count++;            // Increase depth
        } else { // ch == ')'
            count--;            // Decrease depth first (we are closing a bracket)
            if (count > 0) {    // If we're still inside, add ')' to result
                result += ch;
            }
        }
    }

    return result; // Return the final string without outermost parentheses
}

int main() {
    string s = "(()())(())";  // Input string with valid parentheses
    string output = removeOuterParentheses(s); // Call the function
    cout << "Result: " << output << endl; // Print the result
    return 0;
}


