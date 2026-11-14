//Constructor
#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    int id ;
    string name;
    string dep;
    double cgpa;

    student(int id , string name, string dep, double cgpa)
    {
        this-> id = id;
        this-> name = name;
        this-> dep = dep;
        this-> cgpa = cgpa;

        cout << "ID : "<< id << endl;
        cout << "name : "<< name << endl;
        cout << "dep : "<< dep << endl;
        cout << "CGPA : "<< cgpa << endl;
    }

};
int main ()
{
    student doc1(2451,"Zakaria" ,"CSE" ,2.15);
    


    return 0;
}