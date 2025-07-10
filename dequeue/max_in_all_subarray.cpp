#include<iostream>
#include<deque>
using namespace std;

void printmax(int arr[], int n , int k){
    deque<int>d;
    for(int i=0;i<k;i++){
        while(!d.empty() && arr[i] >= arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<arr[d.front()]<<" ";
        while(!d.empty() && d.front()<= i-k){
            d.pop_front();
        }
        while(!d.empty() && arr[i]>= arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }
    cout<<arr[d.front()]<<" ";
}
int main(){
    int arr[]={10,8,5,12,15,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    printmax(arr,n,k);
    return 0;
}