#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int arr[], int n , int d){
    reverse(arr, arr+d);
    reverse(arr+d , arr+n);
    reverse(arr , arr+n);
}
int main(){
    int arr[]= {0,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    rotate(arr, n ,d);
    cout<<"Rotated array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}