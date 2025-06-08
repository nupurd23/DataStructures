#include<bits/stdc++.h>
using namespace std;

int first(int arr[], int n,int low , int high , int x){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(x>arr[mid]){
        first(arr,n,mid+1,high,x);
    }else if(x<arr[mid]){
        first(arr,n , low, mid-1,x);
    }else{
        if(mid==0 || arr[mid-1]!= arr[mid]){
            return mid;
        }
        else{
            return first(arr,n , low , mid-1,x);
        }
    }
}
int main(){
    int arr[]={23,12,4,21,21,4,21,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x= 21;
    sort(arr,arr+n);
    int result= first(arr,n,0,n-1,x);
    cout<<result;
    return 0;

}