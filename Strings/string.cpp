#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string arra = "Hi Iam Jibon";
    string arra1 = " and i love c++";
    string arra4;

    string arra3 = arra+arra1;

    getline(cin,arra4);

    cout << "Output : " << arra << endl;
    cout << "Output : " << arra3 << endl;
    cout << "Output : " << arra4 << endl;
    return 0;
}