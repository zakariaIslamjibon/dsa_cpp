#include <iostream>
using namespace std;

int main ()
{
    char alfa;
    cout << "Enter Your Alphabet :";
    cin >> alfa;

    if (alfa >= 'a' && alfa <= 'z')
    {
        cout << "Lowercsae";
    }
    else {
        cout << "Upercsae" << endl;
    }
    return 0;
}