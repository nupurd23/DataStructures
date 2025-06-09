#include<iostream>
using namespace std;

void move_zeroes(int arr[], int n ){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i] !=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
int main(){
    int arr[]={2,0,3,0,0,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    move_zeroes(arr,n);
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}