#include<iostream>
using namespace std;

bool check_string_rotation(string &s1 , string &s2){
    if(s1.length() != s2.length()){
        return false;
    }
    return ((s1+s1).find(s2) != string :: npos);
}

int main(){
    string s1 = "abcd";
    string s2 = "dabc";
    cout<< check_string_rotation(s1,s2);

    return 0;
}