#include<iostream>
#include<stack>
using namespace std;

void printspan(int arr[] , int n){
    stack<int>s;
    s.push(0);
    cout<<1<<" ";

    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span= s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}
int main(){
    int arr[]={60,20,30,8,28,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    printspan(arr , n);

    return 0;
}