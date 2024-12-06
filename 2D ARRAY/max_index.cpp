#include <iostream>
using namespace std;

void inputMatrix(int matrix[][100], int rows, int cols){
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i = 0; i< rows; ++i){
        for(int j = 0; j< cols; ++j){
            cin >> matrix[i][j];
        }
    }
}

int findMaxSumRow(int matrix[][100], int rows, int cols){
    int maxsum = 0,  maxRowIndex = 0;

    for(int i = 0; i< rows; ++i){
        int rowSum = 0;

        for(int j = 0; j < cols; ++j){
            rowSum += matrix[i][j];
        }

        if(rowSum > maxsum){
            maxsum = rowSum;
            maxRowIndex = i;
        }
    }
    return maxRowIndex;
}

int main()
{
    int rows, cols;
    int matrix[100][100];

    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of cols: ";
    cin>>cols;

    inputMatrix(matrix, rows, cols);

    int maxRowIndex = findMaxSumRow(matrix, rows, cols);

    cout<<"The row index with the maximum sum is: "<< maxRowIndex << endl;

    return 0;
}