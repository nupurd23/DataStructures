#include<iostream>
using namespace std;
int factorial(int x){
   if(x==0){
    return 1;
   }else{
    return x*factorial(x-1);
   }
}
int main(){
    int x;
    cout<<"enter the number ";
    cin>>x;
    int fact = factorial(x);
    cout<<"factorial is "<<fact;
    return 0;
}