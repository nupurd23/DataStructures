#include<iostream>
using namespace std;

int max_sum(int arr[], int n){
    int max_sum = arr[0];
    for(int i=1;i<n;i++){
        max_sum = max(max_sum+arr[i], arr[i]);
    }
    return max_sum;

}

int circular_sum(int arr[], int n){
    int max_normal = max_sum(arr,n);
    if(max_normal < 0){
        return max_normal;
    }
    int arr_sum = 0;
    for(int i=0;i<n;i++){
        arr_sum += arr[i];
        arr[i]=- arr[i];
    }
    int max_circular = arr_sum + max_sum(arr,n);

    return max(max_normal , max_circular);
}
int main(){
    int arr[]={5 , -1 , 0,-5,8,9,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum circular subarray sum is "<<circular_sum(arr,n);
    return 0;
}