#include<iostream>
using namespace std;

int countsubsets(int arr[], int n, int sum){
    if(n==0){
        return(sum==0)? 1:0;

    }
    return countsubsets(arr,n-1,sum)+countsubsets(arr,n-1,sum-arr[n-1]);
}
int main(){
    int arr[]={2,5,3,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 9;
    cout<<countsubsets(arr, n , sum);
    return 0;
}