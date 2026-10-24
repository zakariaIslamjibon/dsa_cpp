#include <iostream>
#include <vector>
using namespace std;


int main ()
{

    vector<int> ver = {3,20,10,};
    ver.pop_back();
    cout << ver[1] << endl;
    cout << "size ver :" << ver.size() <<endl;

    vector<int> marks ;
    marks.push_back(70);
    marks.push_back(35);
    cout << "Size maeks :" << marks.size() << endl;
    
    for (int i : marks)
    {
        cout <<i << endl;
    }
    return 0;
}