#include<iostream>
using namespace std;
const int r =3;
const int c=3;

void snake_print(int mat[r][c]){
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                cout<<mat[i][j]<<" ";
            }
        }else{
            for(int j=c-1;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int mat[r][c]= {{2,3,4},{5,6,7} ,{8,9,0}};
    snake_print(mat);
    return 0;

}