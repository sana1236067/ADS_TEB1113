// Question 3: Hard Problems
// A Tic-Tac-Toe board is given after some moves are played. 
// Find out if the given board is valid, i.e., is it possible to reach this board position 
// after some moves or not.
// Note that every arbitrary filled grid of 9 spaces isn't valid e.g. a grid filled with 3 X and 6 O isn't valid situation 
// because each player needs to take alternate turns.

#include <iostream>
using namespace std;

bool checkWin(char board[], char player) {
    // rows
    if(board[0]==player && board[1]==player && board[2]==player) return true;
    if(board[3]==player && board[4]==player && board[5]==player) return true;
    if(board[6]==player && board[7]==player && board[8]==player) return true;

    // columns
    if(board[0]==player && board[3]==player && board[6]==player) return true;
    if(board[1]==player && board[4]==player && board[7]==player) return true;
    if(board[2]==player && board[5]==player && board[8]==player) return true;

    // diagonals
    if(board[0]==player && board[4]==player && board[8]==player) return true;
    if(board[2]==player && board[4]==player && board[6]==player) return true;

    return false; }

int main() {
    char board[9] = {
        'X','X','O',
        'O','O','X',
        'X','O','X' };

    int xCount = 0;
    int oCount = 0;

    // count X and O
    for(int i=0; i<9; i++) {
        if(board[i] == 'X')
            xCount++;
        if(board[i] == 'O')
            oCount++; }

    bool xWin = checkWin(board, 'X');
    bool oWin = checkWin(board, 'O');

    bool valid = true;

    // rule 1
    if(!(xCount == oCount || xCount == oCount + 1))
        valid = false;

    // rule 2
    if(xWin && oWin)
        valid = false;

    // rule 3
    if(oWin && xCount != oCount)
        valid = false;

    // rule 4
    if(xWin && xCount != oCount + 1)
        valid = false;

    if(valid)
        cout << "Given board is valid";
    else
        cout << "Given board is not valid";

    return 0; }