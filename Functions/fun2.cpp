#include <iostream>
using namespace std;

int multab()
{
    int mult ,a,b;

    cout << "Enter number A :";
    cin >> a;

    cout << "Enter Number B :";
    cin >>b;

    mult = a*b;

    return mult;

}
int main ()
{
    cout << "Multiplication : "<< multab();
    return 0;
}