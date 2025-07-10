#include<iostream>
#include<deque>
using namespace std;

struct MYDS{
    deque<int>dq;
    void insertmin(int x){
        dq.push_front(x);
    }
    void insertmax(int x){
        dq.push_back(x);
    }
    int getmin(){
        return dq.front();
    }
    int getmax(){
        return dq.back();
    }
    int extractmin(){
        int tp = dq.front();
        dq.pop_front();
        return tp;
    }
    int extractmax(){
       int lp = dq.back();
        dq.pop_back();
        return lp;
    }
};

int main(){
    MYDS d;
    d.insertmin(4);
    d.insertmin(2);
    d.insertmax(5);
    d.insertmax(6);
    cout<<d.getmin()<<endl;
    cout<<d.getmax()<<endl;
    return 0;
}