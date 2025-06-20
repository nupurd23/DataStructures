#include<iostream>
using namespace std;

int max_even_odd(int arr[], int n){
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2 !=0) || (arr[i]%2 != 0 && arr[i-1]%2 ==0)){
            curr++;
            res= max(res,curr);
        }else{
            curr=1;
        }
    }
    return res;
}
int main(){
    int arr[]={12,30,14,12,13,80,77};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum length of even odd array is "<<max_even_odd(arr,n);

    return 0;
}