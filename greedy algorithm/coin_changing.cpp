#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int coin_changing(int coin[], int n,int amt){
    int res =0;
    
    sort(coin,coin+n ,greater<int>());
    for(int i=0;i<n;i++){
        if(coin[i]<= amt){
        int c= floor(amt/coin[i]);
        res = res+c;
        amt = amt - c*coin[i];
    }
        if(amt ==0){
            break;
        }

    }
    return res;
}
int main(){
    int coin[]={10,5,2,1};
    int n = sizeof(coin)/sizeof(coin[0]);
    int amt = 25;
    int coins = coin_changing(coin,n,amt);
    cout<<"No of coins required "<<coins;
    return 0;

}