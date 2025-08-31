#include<iostream>
using namespace std;

int stock_buy_sell(int price[] , int n){
    int min_price = price[0];
    int profit = 0;
    for(int i=1;i<n;i++){
     if(price[i]<min_price){
         min_price = price[i];
     }else{
        profit = max(profit , price[i]-min_price);
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