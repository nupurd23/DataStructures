#include<iostream>
using namespace std;

int stockbuysell(int price[] , int n){
    int profit =0;
    for(int i=1;i<n;i++){
        if(price[i]>price[i-1]){
            profit = profit + (price[i]-price[i-1]);
        }
    }
    return profit;
}

int main(){
    int price[]={20,10,50,40,30,60};
    int n = sizeof(price)/sizeof(price[0]);
    cout<<" maximum profit is "<<stockbuysell(price,n);

    return 0;
}