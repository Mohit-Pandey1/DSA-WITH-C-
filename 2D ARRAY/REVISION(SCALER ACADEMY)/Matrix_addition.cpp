#include <iostream>
using namespace std;

int main()
{
   int mat1[3][3];
   int mat2[3][3];
   int sum[3][3];

   cout << "Insert the values of the first matrix: \n";
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
        cin >> mat1[i][j];
      }
   }

   cout << endl;

   cout << "Insert the values of the second matrix: \n";
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
        cin >> mat2[i][j];
      }
   }

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
        sum[i][j] = mat1[i][j] + mat2[i][j];
      }
   }

   cout << endl;

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
        cout << sum[i][j] << "  ";
      }
      cout << endl;
   }

   return 0;
}
