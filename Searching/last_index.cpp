#include<bits/stdc++.h>
using namespace std;

int last_occur(int arr[], int n, int low, int high, int x){
    if(low>high){
        return -1;
    }
    int mid=(high+low)/2;
    if(arr[mid]<x){
        return last_occur(arr,n, mid+1,high,x);
    }
    else if(arr[mid]>x){
        return last_occur(arr,n, low, mid-1,x);
    }else{
        if(mid==n-1 || arr[mid]!= arr[mid+1]){
            return mid;
        }else{
            return last_occur(arr,n, mid+1,high,x);
        }
    }
}
int main(){
    int arr[]={2,2,2,3,7,7,8,9,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=8;
    int result = last_occur(arr,n,0,n-1,x);
    cout<<result;
    return 0;
}

