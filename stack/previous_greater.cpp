#include<iostream>
#include<stack>
using namespace std;

void prev_greater(int arr[], int n){
    stack<int>s;
    s.push(0);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i]){
           s.pop();
        }
        int pg = (s.empty()) ? -1 : s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}

int main(){
    int arr[]={20,30,10,5,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    prev_greater(arr , n);

    return 0;
}