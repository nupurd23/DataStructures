#include<iostream>
#include<algorithm>
using namespace std;

void nextpermutation(int arr[],int n){
    next_permutation(arr,arr+n);
    cout<<"Next permutation ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextpermutation(arr,n);

    return 0;
}