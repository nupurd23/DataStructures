#include<iostream>
using namespace std;

void spiral(int mat[][4], int R, int C) {
    int top = 0, left = 0, bottom = R - 1, right = C - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++)
            cout << mat[top][i] << " ";
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << mat[bottom][i] << " ";
            bottom--;
        }

        // Print left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";
            left++;
        }
    }
}

int main() {
    const int R = 4, C = 4;
    int mat[R][C] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10,11,12}, 
        {13,14,15,16}
    };

    spiral(mat, R, C);

    return 0;
}
