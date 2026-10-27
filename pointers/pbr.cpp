#include <iostream>

using namespace std;

void changeNum(int* ptr)
{

    *ptr = 10;
}
int main ()
{
    int num = 40;
    changeNum(&num);

    cout << num << endl;

    return 0;
}