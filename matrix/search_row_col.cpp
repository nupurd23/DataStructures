#include<iostream>
using namespace std;

void search(int mat[][4], int R, int C, int x) {
    int i = 0, j = C - 1;
    while (i < R && j >= 0) {
        if (mat[i][j] == x) {
            cout << "Found at row " << i << " and column " << j << endl;
            return;
        } else if (mat[i][j] > x) {
            j--;
        } else {
            i++;
        }
    }
    cout << "Not found" << endl;
}

int main() {
    const int R = 4, C = 4;
    int mat[R][C] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    
    int x = 29;
    search(mat, R, C, x);  // Output: Found at row 2 and column 1

    return 0;
}
