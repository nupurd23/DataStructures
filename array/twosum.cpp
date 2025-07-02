#include<iostream>
#include<algorithm>
using namespace std;

int two_sum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]>k){
           
            high--;
        }else if(arr[low]+ arr[high] < k){
            low++;
        }else{
            cout<<"yes pair exists ";
            return 0;
        }
    }
    cout<<"no pair exists";
    return 0;
}

int main(){
    int arr[]={2,1,5,3,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;
    sort(arr,arr+n);
    two_sum(arr,n,k);

    return 0;
}