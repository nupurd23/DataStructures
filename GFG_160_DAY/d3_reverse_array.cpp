#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[] , int n){
    int low=0;
    int high = n-1;
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int main(){
    int arr[] ={12,9,3,45,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}