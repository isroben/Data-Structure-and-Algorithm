#include<iostream>
using namespace std;

int main(){
    int mat1[4][3] = {{1, 3, 5}, {9, 2, 0}, {4, 7, 0}, {3, 6, 1}};
    int mat2[3][2] = {{5, 6}, {6, 7}, {3, 1}};
    int mat[4][2] = {0};

    int row1 = 4, row2 = 3, column1 = 3, column2 = 2;

    if(column1 == row2){
        for(int i=0; i<row1; i++){
            for(int j=0; j<column2; j++){
                for(int k=0; k<column1; k++){
                    mat[i][j] += mat1[i][k]*mat2[k][j];
                }
            }
        }
        
        for(int i=0; i<row1; i++){
            for(int j=0; j<column2; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;

        }
    }
}