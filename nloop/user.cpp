#include <iostream>
using namespace std;

int main ()
{
    int raw,col,num;

    

    cout << "Enter raw :";
    cin >> raw;

    cout << "Enter column :";
    cin >> col;

    cout << "Enter Number :";
    cin >> num;

    for (int i = 0; i<raw ; i++)
    {
        
        for (int j = 0; j<col; j++)
        {
            cout << num << " ";
            num +=1;
        }
        cout << endl;
    }

    return 0;
}