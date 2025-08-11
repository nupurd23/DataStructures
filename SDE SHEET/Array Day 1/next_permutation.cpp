#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void nextpermute(int arr[], int n){
    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextpermute(arr,n);
    return 0;
}