#include<iostream>
#include<queue>
using namespace std;

struct stack{
   queue<int>q1,q2;
   int top(){
     if (q1.empty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
    return q1.front();
   }
   int size(){
    return q1.size();
   }
   void pop(){
    if (q1.empty()) {
            cout << "Stack is empty.\n";
            return;
        }
        q1.pop();
   }
   void push(int x){
    while(q1.empty()==false){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(q2.empty()==false){
        q1.push(q1.front());
        q2.pop();
    }
   }
};

int main(){
      stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;  // Output: 30
    s.pop();
    cout << "Top after pop: " << s.top() << endl;  // Output: 20
    cout << "Size: " << s.size() << endl;  // Output: 2
    

    return 0;
}