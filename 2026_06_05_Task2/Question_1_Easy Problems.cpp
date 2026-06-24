// Question 1: Easy Problems
// Given a matrix mat[][], the task is to find the maximum element of each row.

#include <iostream>
using namespace std;

int main() {
    int mat[3][4] = {
        {3, 4, 1, 8},
        {1, 4, 9, 11},
        {76, 34, 21, 1} };

    for(int i = 0; i < 3; i++) {
        int max = mat[i][0];

        for(int j = 1; j < 4; j++) {
            if(mat[i][j] > max) {
                max = mat[i][j]; } }

        cout << max << endl;}
    return 0; }