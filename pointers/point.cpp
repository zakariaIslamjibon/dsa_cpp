#include <iostream>
using namespace std;

int main ()
{
    int number = 20;
    int* pon = &number;
    int** pon1 = &pon;
    int** pon2=NULL;

    cout << number << endl;
    cout << pon << endl;
    cout << *(pon) << endl;
    cout << **(pon1) << endl;
    cout << pon2 << endl;
    return 0;
}