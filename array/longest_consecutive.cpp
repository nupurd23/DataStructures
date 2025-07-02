#include<iostream>
#include<algorithm>
using namespace std;

int longest_consecutive_sequence(int arr[], int n){
    int count =1;
    int longest=1;
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if (arr[i] == arr[i - 1]) {
            continue;
        }
        else if(arr[i]== arr[i-1]+1){
            count = count+1;
        } else {
            longest = max(longest, count);
            count = 1;
        }

    }
    return count;
}
int main(){
    int arr[]={3, 8, 5, 7, 6,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int result = longest_consecutive_sequence(arr,n);
    cout<<result;

    return 0;
}