#include <iostream>
using namespace std;

void printSum(int matrix[][3], int row, int col){
    int first = 0;
    int sec = 0;

    int i = 0;
    while(i<row){
        first += matrix[i][i];
        i++;
    }

    i = 0;
    int j = col - 1;
    while(j>=0)
    {
        sec+=matrix[i][j];
        i++,j--;
    }
    cout<<first<<" "<<sec<<" ";
}

int main()
{
    int matrix[3][3] = {10,20,30,40,50,60,70,80,90};
    printSum(matrix,3,3);
}