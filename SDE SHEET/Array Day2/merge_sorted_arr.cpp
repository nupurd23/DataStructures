#include<bits/stdc++.h>
using namespace std;

void merge_arr(int arr[] , int arr2[], int n, int m){
    int low=n-1;
    int high = 0;
    while(low>=0 && high<m ){
        if(arr[low]>arr2[high]){
            swap(arr[low], arr2[high]);
            low--;
            high++;
        }else{
            break;
        }
    }
    sort(arr, arr + n);
    sort(arr2, arr2 + m);
}
int  main(){
    int arr[] ={1,2,4,6};
    int arr2[]={3,5,7,8,9};
    int n =4;
    int m = 5;
    merge_arr(arr, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}