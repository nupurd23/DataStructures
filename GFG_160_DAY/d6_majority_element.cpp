#include<iostream>
using namespace std;

int find_majority(int arr[] , int n){

    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count >n/2){
                return arr[i];
            }
    }
    return -1;
}
int main(){
    int arr[]={1,2,34,1,12,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< find_majority(arr,n);
    return 0;
}