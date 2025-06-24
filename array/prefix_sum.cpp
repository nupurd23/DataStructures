#include<iostream>
using namespace std;
int preprocessing(int arr[],int ps[], int n){
    
     ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]= ps[i-1] +arr[i];
    }
    
}
int getsum(int ps[],int l , int r){
        if(l==0){
            return ps[r];
        }
        return ps[r]- ps[l-1];
    }

int main(){
    int arr[]={5,10,15,20,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ps[n];
    preprocessing(arr,ps,n);

    cout<<getsum(ps,0,4);
    return 0;

}