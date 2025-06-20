#include<iostream>
using namespace std;

int max_sum(int arr[], int n){
    int max_sum = arr[0];
    for(int i=1;i<n;i++){
        max_sum = max(max_sum+arr[i], arr[i]);
    }
    return max_sum;

}
int main(){
    int arr[]={2,-4,5,0,-9,2,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum subarray sum is "<<max_sum(arr,n);
    return 0;
}