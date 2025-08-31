#include<iostream>
#include<algorithm>
using namespace std;

int twosum(int arr[], int n, int k){
    sort(arr,arr+n);
    int left = 0;
    int right = n-1;
    while(left<right){
    int sum =arr[left] + arr[right];
    if(sum == k){
        return 1;
    }else if(sum <k){
      left++;
    }else{
        right--;
    }
    }
    return -1;
}
int main(){
    int arr[]={1,0,-1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    int result = twosum(arr,n,k);
    cout<<result;
    return 0;
}