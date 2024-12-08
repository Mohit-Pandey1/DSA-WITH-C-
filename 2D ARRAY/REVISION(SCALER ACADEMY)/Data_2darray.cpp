#include <iostream>
using namespace std;

void printData(int mat[3][3])
{
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << "Element at array[" << i
              << "][" << j << "]: ";
         cout << mat[i][j] << endl;
      }
      cout << endl;
   }
}

int main()
{
   int mat[3][3];

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << "Enter data to be inserted at array[" << i
              << "][" << j << "]: ";
         cin >> mat[i][j];
      }
   }

   printData(mat);

   return 0;
}
