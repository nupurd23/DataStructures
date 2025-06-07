#include<iostream>
using namespace std;

bool ispalindrome(int n){
    int rev=0;
    int temp= n;
    while(temp!=0){
        int ld= temp %10;
        rev= rev*10 +ld;
        temp= temp/10;
    }
    return(rev==n);
}
int main(){
    int n= 23344332;
    bool result = ispalindrome(n);
   if(result ==1){
    cout<<"yes it is palindrome ";
   }else{
    cout<<" Not a palindrome number";
   }
    return 0;
}