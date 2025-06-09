#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[], int low, int high){
   
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftrotate(int arr[], int n , int d){
    reverse(arr, 0 ,d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}
int main(){
    int arr[]={2,4,3,9,6,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=2;
    leftrotate(arr,n,d);
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}