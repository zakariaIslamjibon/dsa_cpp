#include <iostream>
using namespace std;

int main ()
{
    int num = 24;
    double price = 100.99;

    float sum = num + price;
    float mult = num * price;
    float div = num /price;
    float sub = num - price;
    float mod = num || price;

    cout << sum << "\n" <<mult <<"\n" <<div << "\n";
    cout << sub << "\n" <<mod <<"\n";

    return 0;
    

}