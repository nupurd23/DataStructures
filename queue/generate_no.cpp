#include<iostream>
#include<queue>
using namespace std;

void printfirstN(int n){
    queue<string>q;
    q.push("5");
    q.push("6");
    for(int count=0;count<n;count++){
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");

    }
}
int main() {
    int n = 10;
    printfirstN(n);
    return 0;
}