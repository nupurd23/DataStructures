#include <iostream>
using namespace std;

bool lemonadeChange(int arr[], int n) {
    int five = 0, ten = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 5) {
            five++;
        } else if (arr[i] == 10) {
            if (five > 0) {
                five--;
                ten++;
            } else {
                return false;
            }
        } else { // arr[i] == 20
            if (ten > 0 && five > 0) {
                ten--;
                five--;
            } else if (five >= 3) {
                five -= 3;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int arr[] = {5, 5, 5, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (lemonadeChange(arr, n))
        cout << "YES\n";
    else
        cout << "NO\n";
        
    return 0;
}