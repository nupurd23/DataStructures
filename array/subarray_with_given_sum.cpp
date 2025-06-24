#include<iostream>
using namespace std;

bool subarray_sum(int arr[] , int n , int sum){
    int curr =0;
    int s=0;
    for(int i=0;i<n;i++){
        curr = curr + arr[i];
        while(curr >sum){
            curr = curr - arr[s];
            s++;
        }
        if(curr==sum){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={20,10,30,2,6,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=13;
    cout<< subarray_sum(arr,n, sum);

    return 0;
}