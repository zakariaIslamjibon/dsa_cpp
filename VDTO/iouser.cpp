#include <iostream>
using namespace std;

int main ()
{
    float num1 , num2;

    cout << "Enter Number 1 : \n";
    cin >> num1;

    cout << "Enter Number 2 : \n";
    cin >> num2;

    int sum = num1 + num2;
    cout << "The Sum : " << sum << endl;

    float mult = num1 * num2;
    cout << "The Multiplication : " << mult << endl;

    float div = num1 / num2;
    cout << "The division : " << div << endl;

    return 0;
}