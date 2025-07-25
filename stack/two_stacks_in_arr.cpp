#include<iostream>
using namespace std;

struct TwoStacks{
    int *arr, cap, top1,top2;
    TwoStacks(int n){
        cap=n,top1=-1,top2=cap , arr = new int [n];
    }
    void push1(int x){
        if(top1<top2){
            top1++;
            arr[top1]=x;
        }
    }
    void push2(int x){
        if(top1<top2){
            top2--;
            arr[top2]=x;
        }
    }
    int pop1(){
        if(top1>=0){
            int x= arr[top1];
            top1--;
            return x;
        }else{
            exit(1);
        }
    }
    int pop2(){
        if(top2<cap){
            int x = arr[top2];
            top2++;
            return x;
        }else{
            exit(1);
        }

    }
};

int main(){
    TwoStacks ts(5);
    ts.push1(10);
    ts.push2(20);
    ts.push1(30);
    ts.push2(40);
    cout << ts.pop1() << endl; // 30
    cout << ts.pop2() << endl; // 40
    return 0;
}
