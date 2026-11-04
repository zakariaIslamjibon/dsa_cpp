#include <iostream>
using namespace std;

bool linerSearch(int matrix[4][3],  int raw, int cols , int target)
{
    for (int i = 0; i< raw; i++)
    {
        for (int j = 0; j< cols ; j++)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        } 
    }
    return false;
}
int main ()
{
    int matrix[4][3] = {{1,2,3}, {4,5,6} , {7,8,9} , {10,11,12}};
    int raw = 4;
    int cols = 3;
    
    cout << linerSearch(matrix,raw,cols ,7) << endl;
    return 0;
}