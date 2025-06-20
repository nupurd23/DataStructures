#include<iostream>
using namespace std;

void frequency(int arr[], int n){
    
    int count =1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else if(arr[i] != arr[i-1]){
            cout<<"Frequency of "<<arr[i]<<" is "<<count<<endl;
            count =1;
        }
        
        
        
    }
    cout<<"frequency of "<<arr[n-1]<<" is "<<count<<endl;
}
int main(){
    int arr[] ={1,1,1,1,2,2,2,4,4,4,6,6,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);
    return 0;
}