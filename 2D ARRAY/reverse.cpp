#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;

    int matrix[100][100];

    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i = 0; i< rows; ++i){
        for(int j = 0; j < cols; ++j){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i< rows; ++i){
        for(int j = 0; j < cols / 2; ++j){
            swap(matrix[i][j], matrix[i][cols - j - 1]);
        }
    }

    cout<<"After reversing every elements of matrix :: "<<endl;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j<cols;++j){
            cout<< matrix[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}