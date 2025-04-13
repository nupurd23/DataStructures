#include<bits/stdc++.h>
using namespace std;

int cmpr(pair<int,int>a,pair<int,int>b){
    return (a.second < b.second);
}

int activity_selection(pair<int,int>arr[],int n){
    int res=1;
    int prev = 0;
    sort(arr,arr+n,cmpr);
    for(int curr = 1;curr<n;curr++){
        if(arr[curr].first>=arr[prev].second){
            res++;
            prev=curr;
        }
    }
    return res;
}

int main(){
    pair<int,int>arr[]={{1,4},{2,5},{4,6},{6,9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int act = activity_selection(arr,n);
    cout<<"maximum activities "<<act;

    return 0;
}