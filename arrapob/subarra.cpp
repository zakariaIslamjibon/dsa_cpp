#include <iostream>
using namespace std;

int main ()
{
    int arra[] ={1,2,3,4,5};
    int num =5;

    int start ,end;

    for (start = 0; start <num ; start++)
    {
        for (end = start ; end <num ; end++)
        {
            for (int i = start; i<=end ; i++)
            {
                cout << arra[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }
   
    return 0;
}