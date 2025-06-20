#include<iostream>
using namespace std;

int minimise_ht(int arr[], int n , int k){
  int diff = arr[n-1]-arr[0];
  int mini,maxi;
  for(int i=1;i<n;i++){
      maxi = max(arr[i-1]+k , arr[n-1]-k);
      mini= max(arr[0]+k , arr[i]-k); 
  }
}