#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void nQueens(vector<vector<string>> &board, int row, int n, vector<vector<int>> ans){
    if(row==n){
        ans.push_back(board);
        return;
    }

    for(int j=0; j<n; j++){
        if(isSafe(board, row, j, n)){
            board[row][j] = 'Q';
            nQueens(board, row+1, n, ans);
            board[row][j] = '.';
        }
    }
}

int main(){


    return 0;
}