#include<iostream>
#include<algorithm>
using namespace std;

int stock_buy_sell(int arr[], int n){
    int min_price = arr[0];
    int max_profit =0;
    for(int i=1;i<n;i++){
        if(arr[i]<min_price){
            min_price = arr[i];

        }else{
            max_profit = max(max_profit, arr[i]- min_price);
        }
 
    }
 return max_profit;
}


int main(){
    int arr[]={7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = stock_buy_sell(arr,n);

    cout<<"Maximum profit earned "<<result;

    return 0;
}