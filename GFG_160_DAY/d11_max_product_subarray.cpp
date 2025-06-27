#include<iostream>
using namespace std;

int max_product(int arr[], int n){
    int maxpro = arr[0];
    int curr_max = arr[0];
    int curr_min= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(curr_min , curr_max);
        }
        curr_min= min(arr[i], curr_min*arr[i]);
        curr_max = max(arr[i], curr_max*arr[i]);
        maxpro = max(maxpro , curr_max);
    }
    return maxpro;
}
int main(){
    int arr[]={2,0,4,-1,45,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum product of subarray is "<<max_product(arr,n);
    return 0;
}