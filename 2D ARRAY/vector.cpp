#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //Taking user input

    int n, m;
    cout<<"Enter the rows and cols: ";
    cin>>n>>m;

    // Create a 2d array
    vector<vector<int> > matrix(n, vector<int>(m,1));

    // for(int i = 0; i<3; i++)
    // for(int j = 0; j<4; j++)
    // cout<<matrix[i][j]<<" ";

    // cout<<"Rows = "<<matrix.size();
    // cout<<endl;
    // cout<<"Cols = "<<matrix[0].size();

    for(int i = 0; i<n;i++)
    for(int j = 0; j<n;j++)
    cin>>matrix[i][j];

    for(int i= 0; i<n;i++)
    {
        for(int j = 0; j<n;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}