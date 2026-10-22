#include <iostream>
using namespace std;

void change ()
{
    int arra[] = { 10,30,50,20};
    int size = 4;

    int start = 0; int end = size -1;
    while (start < end)
    {
        swap(arra[start],arra[end]);
        start++;
        end--;
    }

    for (int i = 0; i<size ;i++)
    {
        cout << arra[i] << " ";
    }
}
int main ()
{
    change();
    return 0;
}