
#include <iostream>
using namespace std;

int main()
{
    int num;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        prime = false;
    }
    else
    {
        for (int i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if (prime == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Non Prime Number";
    }

    return 0;
}
