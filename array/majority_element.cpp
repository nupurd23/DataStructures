#include<iostream>
using namespace std;

int majority(int arr[], int n){
    int count =1;
    for(int i=1;i<n;i++){
       if(arr[i]== arr[i-1]){
        count++;
         if(count >n/2){
        return arr[i];
       }
       }
       else{
        count =1;
       }
    }
    return 0;

}
int main(){
    int arr[]={1,2,3,3,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< majority(arr,n);
    return 0;
}