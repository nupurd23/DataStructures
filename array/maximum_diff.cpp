#include<iostream>
#include<algorithm>
using namespace std;

int max_diff(int arr[], int n){
    int max_diff=arr[1]-arr[0];
    int min_val = arr[0];
    for(int j=1;j<n;j++){
        max_diff = max(max_diff , arr[j]-min_val);
        min_val= min(min_val, arr[j]);
    }
    return max_diff;
    
}
int main(){
    int arr[]={23,45,12,8,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<" Maximum difference is "<<max_diff(arr,n);

    return 0;
}