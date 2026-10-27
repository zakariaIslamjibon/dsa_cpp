#include <iostream>
using namespace std;

int main ()
{
    int number = 20;
    int* pon = &number;
    int** pon1 = &pon;

    cout << number << endl;
    cout << pon << endl;
    cout << *(pon) << endl;
    cout << **(pon1) << endl;
    return 0;
}