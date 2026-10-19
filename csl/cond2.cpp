#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Enter Your Age : \n";
    cin >> num;

    if (num >= 18)
    {
        cout << "You Can Vote" << "\n";
    }
    else {
        cout << "You Can't Vote , Your Agg :" << num << endl;
    }
    
return 0;     
}
