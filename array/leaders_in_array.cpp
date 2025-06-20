#include<iostream>
using namespace std;

int leaders(int arr[], int n){
    int leader = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(leader< arr[i]){
            leader = arr[i];
        }
    }
    return leader;
}
int main(){
    int arr[] ={1,2,3,4,2,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"leader in given array is "<<leaders(arr,n);
    return 0;
}