#include<bits/stdc++.h>
using namespace std;
const int n=3;

void transpose(int mat[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }
}
int main(){
    int mat[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    
    transpose(mat);
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}