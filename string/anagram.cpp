#include<iostream>
using namespace std;

const int CHAR = 256;

bool anagram(string &s1, string &s2) {
    if(s1.length() != s2.length()){
        return false;
    }

    int count[CHAR] = {0};

    for(int i = 0; i < s1.length(); i++){
        count[s1[i]]++;   // Increment for s1
        count[s2[i]]--;   // Decrement for s2
    }

    for(int i = 0; i < CHAR; i++){
        if(count[i] != 0){
            return false;
        }
    }

    return true;
}

int main(){
    string s1 = "nupurdang";
    string s2 = "dangnupur";
    cout << anagram(s1, s2);  // Output: 1 (true)
    return 0;
}
