#include <iostream>
using namespace std;
// mini index find

int main ()
{
    int marks[] = {10,90,4,60};
    int size = 4;
    
    int mini = 0;

    for (int i=0; i<size; i++)
    {
        if (marks[i]<marks[mini])
        {
            mini = i;
        }
    }
    
    cout << mini <<endl; 
    cout <<marks[mini];


    return 0;
}
