#include<iostream>
using namespace std;

int maxprofit(int price[], int n){
    int res =0;
    int mini = price[0];
    for(int i=1;i<n;i++){
       mini = min(mini , price[i]);
       res = max(res , price[i]-mini);
    }
    return res;

}
int main(){
    int price[] = {2,3,0,5,1,7};
    int n = sizeof(price)/sizeof(price[0]);

    cout<<"Maximum profit with one limit is "<<maxprofit(price , n);

    return 0;
}