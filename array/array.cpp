#include <iostream>
using namespace std;

int main ()
{
    int marks[9] = {39,50,55,60,70,80,90,100};
    marks[2] = 90;

    cout << marks[2] << "\n";
    cout << marks[0] << "\n";
    cout << marks[1] << "\n";
    cout << marks[3] << "\n";
    return 0;
}