#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    char arra[100];

    int len = 0;
    cout << "Enter your thing :";
    cin.getline(arra,100);
    
    for (int i =0; i < arra[i] !='\0' ; i++)
    {
        len++;
    }

    cout <<"Output : " << arra << endl;
    cout <<"Output : " << len << endl;
    return 0;
}