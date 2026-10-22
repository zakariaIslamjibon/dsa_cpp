#include <iostream>
using namespace std;

int search (int arra[], int size, int terget)
{
    for (int i =0; i<size; i++)
    {
        if (arra[i] == terget)
        {
            cout << arra[i]<<endl;
            return i;
            
        }
    }
    return -1;
}
int main ()
{
    int arra[]={10,50,45,6};
    int size = 4;
    int terget =45;


    cout <<search(arra, size, terget) << endl; 
    
    return 0;
}