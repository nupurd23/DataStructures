#include<iostream>
using namespace std;

int stock(int price[], int n){
    int profit =0;
    int min_price = price[0];
    for(int i=0;i<n;i++){
        if(price[i]< min_price){
            min_price =price[i];
        }else{
            profit = max(profit , price[i]-min_price);
        }

    }
    return profit;

}
int main(){
    int price[]={7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(price[0]);
    int res = stock(price, n);
    cout<<res;
    return 0;
}