#include <iostream>
using namespace std;

int main ()
{
    int num, sum = 0;

    cout << "Enter Sum Number : ";
    cin >> num;

    for (int i = 1 ; i <= num ; i++)
    {
        cout << i << " ";
        sum +=i;
    }
    cout << "\n";

    cout << sum ;
    return 0;
}