#include<iostream>
#include<algorithm>
using namespace std;

void rearrange(int arr[], int n,int ar[],int m){
    
    int pos_idx =0;
    int neg_idx = 1;
    for(int i=0;i<n;i++){
      if(arr[i]>0){
        ar[pos_idx]=arr[i];
        pos_idx = pos_idx+2;
      }else{
        ar[neg_idx]= arr[i];
        neg_idx=neg_idx+2;
      }
    }
}

int main(){
    int arr[]={1,2,-4,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m ;
    m =n;
    int ar[m];
    
    rearrange(arr,n,ar,m);
    for(int i =0;i<n;i++){
        cout<<ar[i]<<" ";
    }


    return 0;
}