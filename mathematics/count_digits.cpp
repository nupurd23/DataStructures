#include<iostream>
using namespace std;

int count(int x){
    int res=0;
    while(x>0){
        x= x/10;
        res++;
    }
    return res;
}
int main(){
    int x;
    cout<<"enter the number ";
    cin>>x;
    int result = count(x);
    cout<<" No of digits in the given number are "<<result;
 return 0;
}