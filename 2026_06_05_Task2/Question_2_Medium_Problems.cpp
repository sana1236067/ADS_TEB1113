// Question 2: Medium Problems
// Given a matrix mat[][] and an integer x, the task is to check if x is present in mat[][] or not. 
// Every row and column of the matrix is sorted in increasing order.

#include <iostream>
using namespace std;

int main() {
    int mat[3][3] = {
        {3, 30, 38},
        {20, 52, 54},
        {35, 60, 69} };

    int x;
    bool found = false;
    cout << "Enter number to search: ";
    cin >> x;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(mat[i][j] == x) {
                found = true;}
        }
    }

    if(found) {
        cout << x << " is found in the matrix."; }
    else {
        cout << x << " is not found in the matrix."; }
        
    return 0; }