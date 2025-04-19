#include<iostream>
#include<algorithm>
using namespace std;

int assign_cookies(int greed[], int arr[],int m ,int n){
    int l=0 ;
    int r=0;
    while(l<m && r<n){
        if(greed[r]<=arr[l]){
            r=r+1;
        }
        l=l+1;
    }
    return r;
}

int main(){
    int greed[]={1,5,3,3,4};
    int arr[]={4,2,1,2,1,3};
    int n= sizeof(greed)/(greed[0]);
    int m = sizeof(arr)/(arr[0]);
    sort(greed,greed+n);
    sort(arr,arr+m);
    int result = assign_cookies(greed,arr,m,n);
    cout<<result;

    return 0;
}