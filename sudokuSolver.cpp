#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool helper(vector<vector<char>> &board, int row, int col){
    if(row == 9){
        return true;
    }

    int nextRow = row, nextCol = col + 1;
    if(nextCol == 9){
        nextRow = row + 1;
        nextCol = 0;
    }

    if(board[row][col] != '.'){
        return helper(board, nextRow, nextCol);
    }
    for(int dig = 1; dig<=9; dig++){
        if(isSafe(board, row, col, dig)){
            board[row][col] = dig;
        }
        if(helper(board, nextRow, nextCol)){
            return true;
        }
        board[row][col] = '.';
    }
}


void sudokuSolver(vector<vector<char>> &board){
    helper(board, 0, 0);
}