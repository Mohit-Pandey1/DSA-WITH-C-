#include <iostream>
using namespace std;

void Wave(int arr[][10], int rows, int cols){
    for(int col = 0; col < cols; col++){
        if(col % 2 == 0){
            for(int row = 0; row < rows; row++){
                cout<< arr[row][col] << " ";
            }
        }
        else{
            for(int row = rows - 1; row >= 0; row--)
            {
                cout<<arr[row][col] <<  " ";
            }
        }
    }
}

int main()
{
    int rows, cols;

    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;

    int arr[10][10];

    cout<<"Enter the elements of the array:\n";
    for(int i = 0; i< rows; i++){
        for(int j = 0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Wave form: ";
    Wave(arr, rows, cols);

    return 0;
}