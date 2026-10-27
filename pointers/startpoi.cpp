#include <iostream>
using namespace std;

int main ()
{
    int num = 10;
    int* poin = &num;
    int** poit2 = &poin;

    cout << "Number address : " << &num << endl;
    cout << "point = num : " << poin << endl;
    cout << "poin address : " << &poin << endl;
    cout << "poin2 address : " << poit2 << endl;
    
    return 0;
}
