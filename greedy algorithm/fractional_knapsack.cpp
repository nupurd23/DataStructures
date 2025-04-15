#include<bits/stdc++.h>
using namespace std;

bool cmpr(pair<int,int>a, pair<int,int>b){
    double r1 = (double)a.first/a.second;
    double r2 = (double)b.first/b.second;
    return r1>r2; 
}
double fractional(pair<int,int>arr[],int n, int capacity){
    sort(arr,arr+n,cmpr);
    double res = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i].second <=capacity){
            res = res + arr[i].first;
           capacity = capacity - arr[i].second;
        }else{
           res = res + arr[i].first * ((double)capacity/ arr[i].second);
        }
    }
    return res;
}
int main(){
    pair<int,int>arr[]={{12,25},{10,20},{20,30}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int capacity =50;
    double result = fractional(arr,n, capacity);
    cout <<fixed<<  setprecision(2) << result << endl;//setprecision(2) + fixed means: "Always show 2 digits after the decimal.
    return 0;
}