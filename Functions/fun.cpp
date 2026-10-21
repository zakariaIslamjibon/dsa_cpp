#include <iostream>
using namespace std;

void userName()
{
    char name [30];
    cout << "Enter Name :";
    cin >> name;

    cout << "My name is : " <<name << endl;

    
}
int main ()
{
    userName();
    userName();
    return 0;
}