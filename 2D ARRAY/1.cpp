#include <iostream>
using namespace std;


// void printcol(int arr[][4], int row, int col)
// {
//     column wise
//     for(int j = 0; j<col;j++)
//     for(int i = 0; i<row; i++)
//     cout<<arr[i][j]<<" ";
// }

int main(){
    //creating 2D array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr1[3][4] = {0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];

    //printing all of values of array, row wise
    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // cout<<arr[row][col]<<" ";

    //print all value of the 2d array column wise, function call
    // printcol(arr,3,4);


    //search the element in an 2d array

//     int x = 70;
//     for(int row = 0; row < 3; row++)
//     for(int col = 0; col < 4; col++)
//     {
//         if(arr[row][col]==x)
//         {
//             cout<<"Yes ";
//             return 0;
//         }
//     }
//     cout<<"No ";

//Add 2 matrix 
    for(int row = 0; row <3; row++)
    for(int col = 0; col < 4; col ++)
    cout<<ans[row][col]<<" ";
}