#include<iostream>
using namespace std;

bool equilibrium(int arr[], int n){
    int rs =0;
    for(int i=0;i<n;i++){
        rs= rs+arr[i];
    }
    int ls=0;
    for(int i=0;i<n;i++){
        rs=rs-arr[i];
        if(rs==ls){
            return true;
        }
        ls=ls+arr[i];
    }
    return false;
}
int main(){
    int arr[]={4,4,2,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< equilibrium(arr,n);

    return 0;
}