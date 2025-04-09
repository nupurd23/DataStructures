#include<iostream>
#include<algorithm>
using namespace std;

int stock_buy_sell(int arr[],int n){
    int profit = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit = profit + (arr[i]-arr[i-1]);
        }
    }
    
    return profit;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = stock_buy_sell(arr,n);

    cout<<"Maximum profit earned "<<result;

    return 0;
}