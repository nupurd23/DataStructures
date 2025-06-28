#include<iostream>
using namespace std;

const int r=4;
const int c = 4;

void btraversal(int mat[r][c]){
    if(r==1){
        for(int i=0;i<c;i++){
            cout<<mat[0][i]<<" ";
        }
    }
    else if(c==1){
        for(int i=0;i<r;i++){
            cout<<mat[i][0]<<" ";
        }
    }else{
        for(int i=0;i<c;i++){
            cout<<mat[0][i]<<" ";
        }
        for(int i=1;i<r;i++){
            cout<<mat[i][c-1]<<" ";
        }
        for(int i=c-2;i>=0;i--){
            cout<<mat[r-1][i]<<" ";
        }
        for(int i=r-1;i>=1;i--){
            cout<<mat[i][0]<<" ";
        }
    }
}

int main(){
    int mat[r][c] ={{1,2,2,3} ,{3,4,4,5},{4,5,5,6},{6,7,8,9}};
    btraversal(mat);
    return 0;

}