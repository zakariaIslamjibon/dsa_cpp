#include <iostream>
#include <vector>
using namespace std;



int main ()
{

    vector<int> ver = {3,20,10,};
    ver.push_back(40);
    cout << ver.front() << endl;
    cout << ver.back() << endl;

    cout << ver.at(1) << endl;
    cout << ver.capacity();
    }