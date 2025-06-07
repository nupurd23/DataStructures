#include<iostream>
using namespace std;

int search(int arr[], int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={-2,5,6,2,9,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x=2;
    int result= search(arr,n,x);
    cout<<result;
    return 0;

}