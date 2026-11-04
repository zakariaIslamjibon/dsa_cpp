#include <iostream>
using namespace std;

int main ()
{
    int matrix[100][100];
    int raw;
    int cols;

    cout << "Enter Raw : ";
    cin >> raw;

    cout <<"Enter Cols : ";
    cin >> cols;

    

    for ( int i =0  ; i<raw ; i++)
    {
        cout << "raw : ";
        for (int j = 0; j<cols ;j ++)
        {
            cout << "cols : "; 
            cin >> matrix[i][j] ;
        }
    }
    cout << endl;

    for ( int i =0  ; i<raw ; i++)
    {
        for (int j = 0; j<cols ;j ++)
        {
            cout<< matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}