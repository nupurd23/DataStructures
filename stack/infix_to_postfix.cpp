#include<iostream>
#include<stack>
#include<string>
using namespace std;

//func to define operator precedence
int precedence(char op){
    if(op=='^'){
        return 3;
    }
    if(op=='*' || op == '/'){
        return 2;
    }
    if(op=='+' ||op=='-'){
        return 1;
    }
    return 0;
}
//check if char is an operator
bool isOperator(char c){
    return (c=='+' || c=='-' || c=='*' || c=='/'|| c=='^');
}
//check if character is an operand
bool isOperand(char c){
    return isalnum(c);//letters and digits
}
//function to convert infix to postfix
string infixtopostfix(const string& infix){
    stack<char>s;
    string postfix =" ";

    for(char c : infix){
        if(c==' ')continue;
        if(isOperand(c)){
            postfix +=c;
        }
        else if(c=='('){
            s.push(c);
        }else if(c==')'){
            while(!s.empty() && s.top()!='('){
               postfix +=s.top();
               s.pop();
            }
             if (!s.empty() && s.top() == '(')
                s.pop(); // remove '('
        }
        else if (isOperator(c)) {
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                if (c == '^' && s.top() == '^') break; // right-associative '^'
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    // Pop remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    getline(cin, infix);  // Supports expressions with spaces

    string postfix = infixtopostfix(infix);
    cout << "Postfix: " << postfix << endl;

    return 0;
}