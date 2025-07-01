#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    cout<<"size is "<<s.size()<<endl;
    while(s.empty()== false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}