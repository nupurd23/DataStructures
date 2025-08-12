#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    return 0;
}
int main(){
    int arr[]={2,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<duplicate(arr,n);
    return 0;
}