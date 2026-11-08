#include <iostream>
using namespace std;

void recursion(int num)
{
    if (num == 1)
    {
        cout << "1" << endl; 
        return;
    }
    cout << num << " ";
    recursion(num-1);

}
int main ()
{
    recursion(4);
    return 0;
}