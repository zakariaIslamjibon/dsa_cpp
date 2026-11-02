#include <iostream>
using namespace std;

string prime(int num)
{
    for (int i = 2 ; i*i <=num ;i++)
    {
        if (num % i == 0)
        {
            return "non prime";
        }
    }
    return "Prime";
}
int main ()
{
    int num = 47;

    cout << prime(num) << endl;
    return 0;
}