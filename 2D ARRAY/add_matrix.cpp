#include <iostream>
using namespace std;

int main(){
    const int rows = 3;
    const int cols = 3;


    int matrix1[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int matrix2[rows][cols] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sumMatrix[rows][cols];

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout<<"Resultant matrix after addition: "<< endl;
    for(int  i = 0; i< rows;++i){
        for(int j = 0; j < cols; ++j){
            cout<< sumMatrix[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}