#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Enter A Number : ";
    cin >> num;
    
    if (num % 2 == 0)
    {
        cout << "The Number Is Even :" << num << "\n";
    }
    else {
        cout << "The Number Is odd :" << num << endl;
    }

return 0;
}