#include<iostream>
#include<stack>
using namespace std;

int largest_area(int arr[] , int n){
    int tp;
    int curr , res=0;
    stack<int>s;
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            tp=s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i : (i-s.top()-1));
            res = max(res , curr);
        }
        s.push(i);
    }
    while(s.empty()==false){
        tp = s.top();
        s.pop();
        curr = arr[tp]* (s.empty() ? n : (n-s.top()-1));
        res = max(res,curr);
    }
    return res;
}
int main() {
    int hist[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(hist) / sizeof(hist[0]);
    cout << "Maximum area is " << largest_area(hist, n) << endl;
    return 0;
}