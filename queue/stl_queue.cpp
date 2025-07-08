#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(30);
    q.push(50);
    cout<<q.size()<<endl;;
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front();
    return 0;
}