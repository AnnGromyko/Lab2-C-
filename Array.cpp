#include <iostream>
#include <ctime>

using namespace std;

int main()
{
     setlocale(LC_ALL, "RU");
     setlocale(LC_ALL, ".UTF8");

     int rows;
     int cols;
    
     cout << "Введите количетво строк: ";
     cin >> rows;
     cout << "Введите количество столбцов: ";
     cin >> cols;

     int **arr = new int *[rows];

     for (int i = 0; i < rows; i++)
     {
          arr[i] = new int[cols];
     }

   

     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               arr[i][j] = rand() % 20;
               cout << arr[i][j] << '\t';
          }
          cout << endl;
     }


       for (int i=0; i < rows; i++)
     {
          delete[] arr[i];
     }

     delete[] arr;
}