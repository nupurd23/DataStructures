#include<iostream>
#include<algorithm>
using namespace std;
const int CHAR = 256;

int leftmost(string &str){
    bool visited[CHAR];
    fill(visited, visited+ CHAR , false);

    int res = -1;
    for(int i=str.length()-1; i>=0;i--){
        if(visited[str[i]]){
            res=i;
        }else{
            visited[str[i]]= true;
        }
    }
    return res;
}

int main(){
    string str ="nuurrrpurrr";
    cout<<leftmost(str);
    return 0;
}
