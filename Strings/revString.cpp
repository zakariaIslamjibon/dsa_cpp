#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    string arra1;

    cout << "Enter arra : ";
    getline(cin,arra1);

    reverse(arra1.begin(), arra1.end());

    cout << "Outpur : " << arra1 <<endl;
    
    return 0;
}