#include <iostream>
using namespace std;

int sumDig (int num)
{
    int digSum = 0;

    while (num >0)
    {
        int lastDig = num % 10;
        num/=10;

        digSum +=lastDig;
    }
    return digSum;
}
int main ()
{
    cout <<sumDig(2356);
    return 0;
}