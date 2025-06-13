#include<iostream>
using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "bcd";
    if(s1==s2){
        cout<<"same";
    }else if(s1<s2){
        cout<<" String 1 is smaller";
    }else{
        cout<<"string 1 is greater";
    }
}