#include<iostream>
using namespace std;

int max_consecutive_1s(int arr[], int n){
    int max_count = 0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count=0;
        }else{
            count++;
            max_count= max(max_count , count);
        }
    }
    return max_count;
}

int main(){
    int arr[]={1,1,0,0,1,0,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum number of consecutive 1s are "<<max_consecutive_1s(arr,n);

    return 0;
}