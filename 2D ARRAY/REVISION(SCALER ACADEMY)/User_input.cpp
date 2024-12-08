//Taking element as user input in a 2d array



#include <iostream>
using namespace std;

int main(){
    //using for loop
    // int mat[3][3];

    // cout<<"Insert the values of the matrix: ";
    // for(int i = 0; i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         cin>>mat[i][j];
    //     }
    // }

    // cout<<endl;

    // for(int i =0; i<3;i++)
    // {
    //     for(int j = 0; j<3; j++){
    //         cout<<mat[i][j] << " ";
    //     }
    //     cout<< endl;
    // }
    // return 0;

    //using while loop

    // int i = 0;
    // int j = 0;
    // int mat[i][j];
    // cout<<"Insert the values of the matrix: \n";
    // while(i<3)
    // {
    //     j = 0;
    //     while(j<3){
    //         cin>>mat[i][j];
    //         j++;
    //     }
    //     i++;
    // }

    // cout<< endl;

    // for(int i = 0; i< 3;i++)
    // {
    //     for(int j = 0; j< 3;j++){
    //         cout<< mat[i][j]<< " ";
    //     }
    //     cout<< endl;
    // }
    // return 0;


    //using do-while loop
    int i = 0;
    int j = 0;

    int mat[3][3];

    cout<<"Insert the values of the matrix: \n";
    do{
        j = 0;
        do{
            cin>> mat[i][j];
            j++;
        } while(j<3);
        i++;
    } while(i < 3);
    cout<<endl;
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

