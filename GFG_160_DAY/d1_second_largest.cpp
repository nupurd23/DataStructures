#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int second_largest(int arr[] , int n){
    int largest = arr[0];
    int secondlargest = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }else if(arr[i]<largest && arr[i] > secondlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main(){
    int arr[]={12,34,45,78,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"second largest is "<<second_largest(arr,n);
    return 0;
}