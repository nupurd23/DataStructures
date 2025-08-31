#include<bits/stdc++.h>
#include<string>
using namespace std;

bool ispalindrome(string &s1){
    int begin=0;
    int end =s1.length()-1;
    while(begin < end){
        if(s1[begin] != s1[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main(){
    string s1 = "nupurrupun";
    cout<<ispalindrome(s1);
    return 0;
}