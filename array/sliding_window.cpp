//Find the maximum sum of consecutive k elements
#include<iostream>
using namespace std;

int max_sum(int arr[], int n , int k){
    int maxi = 0;
    for(int i=0;i<k;i++){
        maxi = maxi + arr[i];
    }
    int res = maxi;
    for(int i=k;i<n;i++){
       maxi = maxi + arr[i] - arr[i-k];
       res = max(maxi , res);
    }
    return res;
}
int main(){
    int arr[] ={2,-6,10,3,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<"Maximum sum of k consecutive elements using sliding window protocol is "<<max_sum(arr,n,k);

    return 0;
}