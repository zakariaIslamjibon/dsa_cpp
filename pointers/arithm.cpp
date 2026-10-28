#include <iostream>
using namespace std;

int main ()
{
    int arra[] = {10,20,30};
    int b = 20;
    int a = 50;
    int* ptr = &a;
    int* ptr1 = &b;

    cout << ptr <<endl;
    ptr++;
    cout << ptr << endl;

    cout << ptr1 <<endl;
    ptr1 += 2;
    cout << ptr1 << endl;

    cout <<*(arra+1) << endl;
    return 0;
}