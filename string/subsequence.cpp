#include<iostream>
using namespace std;

bool subsequence(string s1 , string s2 , int n , int m){
    int j=0;
    for(int i=0;i<n && j<m;i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return (j==m);
}
int main(){
    string s1="nupurdang";
    int n = s1.length();
    string s2= "nupur";
    int m = s2.length();
    cout<< subsequence(s1,s2,n,m);
    return 0;
}