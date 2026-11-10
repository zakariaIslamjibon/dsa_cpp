
#include <iostream>
using namespace std;

int factoril(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    return num * factoril(num - 1);
}

int main()
{
    cout << "Enter Factorial Number: ";

    int num;
    cin >> num;

    cout << "Factorial = " << factoril(num) << endl;

    return 0;
}
