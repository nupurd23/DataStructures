#include<iostream>
#include<algorithm>
using namespace std;
void reverse(char str[], int low, int high){
    while(low<=high){
        swap(str[low], str[high]);
        low++;
        high--;
    }
}
void reverseWord(char str[] , int n){
    int start =0;
    for(int end= 0; end < n;end++){
        if(str[end] == ' '){
            reverse(str , start ,end-1);
            start = end+1;
        }
    }
    reverse(str, start , n-1);
    reverse(str, 0, n-1);
}


int main(){
    char str[] = "nupur dang";
    int n = sizeof(str)/sizeof(str[0]); // includes '\0'
    reverseWord(str, n - 1); // exclude null terminator
    cout << str << endl;
    return 0;
}