#include<iostream>
#include<algorithm>
using namespace std;

void sort_array(int arr[], int n ){
    int low=0;
    int mid=0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]== 2){
            swap(arr[high], arr[mid]);
            high--;
        }else{
            mid++;
        }
    }
}

int main(){
    int arr[] = {0,1,2,0,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort_array(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}