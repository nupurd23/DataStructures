#include<iostream>
using namespace std;

int firstpetrolpump(int petrol[], int dt[], int n){
    int start =0, prev_pet =0 , curr_pet = 0;
    for(int i=0;i<n;i++){
        curr_pet += (petrol[i]- dt[i]);
        if(curr_pet<0){
            start = i+1;
            prev_pet = curr_pet;
            curr_pet =0;
        }
    }
    return ((curr_pet+prev_pet >=0) ? (start +1) : -1);
}
int main(){
    int petrol[] ={4,8,7,4};
    int dt[]={6,5,3,5};
    int n = sizeof(petrol)/sizeof(petrol[0]);
    cout<<firstpetrolpump(petrol,dt ,n);
    return 0;
}