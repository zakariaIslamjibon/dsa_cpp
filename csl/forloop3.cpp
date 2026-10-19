#include <iostream>
using namespace std;

int main ()
{
    int num, sum = 0;

    cout << "Enter Number : ";
    cin >> num;

    for (int i = 1; i<= num; i++)
    {
        if (i % 2 ==0)
        {
            sum+=i;
        }
    }
    cout << "Even Number sum : " <<sum << endl;

    sum = 0;
    for (int i = 1 ; i<=num; i++)
    {
        if (i%2 !=0)
        {
            sum+=i;
        }
    }
    cout << "odd Number sum : " <<sum << endl;
    return 0;
}