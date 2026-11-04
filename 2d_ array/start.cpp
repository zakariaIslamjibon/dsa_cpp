#include <iostream>
using namespace std;

int main ()
{
     int matrix[4][3] = {{1,2,3} , {4,5,6} , {7,8,9} , {10,11,12}};
     int raw = 4;
     int cols = 3;

     for (int i =0 ; i<raw ; i++)
     {
        for (int j = 0; j < cols ; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
     }
    return 0;
}