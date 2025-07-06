#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

const int R = 4 , C=4;
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

int maxRectangle(int mat[R][C]){
    int res = largest_area(mat[0] ,C);
        for(int i=1;i<R;i++){
           for(int j=0;j<C;j++){
            if(mat[i][j]==1){
                mat[i][j] += mat[i-1][j];
            }
            res = max(res , largest_area(mat[i], C));
            }
            
        }
    return res;
}

int main(){
    int mat[R][C] = {{1,0,1,1},{0,0,1,1},{1,1,1,1},{0,1,1,1}};
    cout<<maxRectangle(mat);
    return 0;
}