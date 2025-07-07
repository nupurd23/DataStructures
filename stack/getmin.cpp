#include<iostream>
#include<stack>
using namespace std;

stack<int>s;
int curr_min;

void push(int x){
    if(s.empty()){
        s.push(x);
        curr_min = x;
    }else if(x<=curr_min){
        s.push(2*x-curr_min);
        curr_min = x;
    }else{
        s.push(x);
    }
}

int getmin(){
    if(s.empty()){
        cout<<"stack is empty ";
        return -1;
    }else{
    return curr_min;
    }
}
int peek(){
    if(s.empty()){
        cout<<"stack is empty ";
        return -1;
    }else{
    int t = s.top();
    return (t<=curr_min) ? curr_min : t;
    }
}
int pop(){
    int t = s.top();
    s.pop();
    if(t<=-curr_min){
       int prev_min = 2* curr_min -t;
       int res = curr_min;
       curr_min = prev_min;
       return res;
    }else{
        return t;
    }
}

int main() {
    push(5);
    push(3);
    push(7);
    cout << "Current Min: " << getmin() << endl; // 3
    cout << "Top: " << peek() << endl;           // 7
    cout << "Popped: " << pop() << endl;         // 7
    cout << "Popped: " << pop() << endl;         // 3
    cout << "Current Min: " << getmin() << endl; // 5
}
