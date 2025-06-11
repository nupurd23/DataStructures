#include<iostream>
using namespace std;

int binary_search(int arr[] , int n, int low , int high , int x){
    while(low<=high){
        int mid= (high+low)/2;
        if(arr[mid]<x){
            high=mid-1;
        }else if(arr[mid]>x){
            low=mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}

int search(int arr[], int n, int x){
    if (arr[0]==x){
        return 0;
    }
    int i =1;
    while(arr[i]<x){
        i=i*2;
    }
    if(arr[i]==x){
        return i;
    }
    return binary_search(arr, n , (i/2)+1, i-1 ,x);
}
int main(){
    int arr[] ={2,2,2,4,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res = search(arr, n, 255);
    cout<<res;
    return 0;
}