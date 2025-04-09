#include<iostream>
using namespace std;

void leaders_in_array(int arr[], int n){
    int high = arr[n-1];
    cout<<high<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>high){
            cout<<arr[i]<<" ";
            high = arr[i];
        }
    }
}

int main(){
    int arr[]={7,2,1,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    leaders_in_array(arr,n);

    return 0;
}