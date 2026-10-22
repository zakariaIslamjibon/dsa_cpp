#include <iostream>
using namespace std;

int main ()
{
    double price[] = {10.99,100,51.15,64.44};

    int size = sizeof(price) / sizeof(double);

    for (int i =0 ; i< size ; i++)
    {
        cout << price[i];
        cout << endl;
    }
    cout << size;
    return 0;
}