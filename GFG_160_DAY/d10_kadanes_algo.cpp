#include<iostream>
using namespace std;

int kadane(int arr[], int n){
    int res = arr[0];
    int max_res = arr[0];
    for(int i=1;i<n;i++){
        res = max(res+arr[i] , arr[i]);
        max_res = max(max_res , res);
    }
    return max_res;
}
int main(){
    int arr[]={2,3,3,-9,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<kadane(arr,n);
    return 0;
}