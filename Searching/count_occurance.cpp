#include<iostream>
using namespace std;

int first_occurance(int arr[], int n ,int low, int high, int x){
   
    int mid=(high+low)/2;
    if(low>high){
        return -1;
    }
    if(x>arr[mid]){
        return first_occurance(arr,n,mid+1, high,x);
    }else if(x< arr[mid]){
        return first_occurance(arr, n , low, mid-1,x);
    }else{
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid;
        }else{
            return first_occurance(arr, n , low , mid-1,x);
        }
    }
}

int last_occurance(int arr[], int n ,int low, int high, int x){
   
    int mid=(high+low)/2;
    if(low>high){
        return -1;
    }
    if(x>arr[mid]){
        return last_occurance(arr,n,mid+1, high,x);
    }else if(x< arr[mid]){
        return last_occurance(arr, n , low, mid-1,x);
    }else{
        if(mid==n-1 || arr[mid+1]!=arr[mid]){
            return mid;
        }else{
            return last_occurance(arr, n , mid+1 , high,x);
        }
    }
}
int count_occurance(int arr[], int n , int x){
    int first = first_occurance(arr, n , 0, n-1,x);
    if(first==-1){
        return 0;
    }else{
        return (last_occurance(arr, n ,0 ,n-1, x) - first +1);
    }
}
int main(){
    int arr[] ={2,2,2 ,5,5,5,5,6,6,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"the number of occurance is "<<count_occurance(arr,n,5);

    return 0;
}