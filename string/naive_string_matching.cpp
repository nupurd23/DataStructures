#include<iostream>
using namespace std;

void naive_search(string &txt , string &pat){
    int n = txt.length();
    int m = pat.length();

    for(int i=0;i<n-m;i++){
        int j;
        for( j=0; j<m;j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
            
        }
        if(j==m){
                cout<<"pattern found at index "<<i<<" ";
            }
    }
    
}
int main(){
    string txt = "nupurdang";
    string pat = "dan";
    naive_search(txt, pat);
    return 0;
}