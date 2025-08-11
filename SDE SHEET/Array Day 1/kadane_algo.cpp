#include<iostream>
#include<algorithm>
using namespace std;

int kadane(int arr[], int n){
    int max_sum = arr[0];
    int sum =arr[0];
    for(int i=1;i<n;i++){
        sum = max(arr[i], sum+arr[i]);
        max_sum = max(sum , max_sum );
    }
    return max_sum;
}

int main(){
    int arr[]= {-2,1,-3,4,-1,2,1,-5,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int result = kadane(arr,n);
    cout<<result;
    return 0;
}
