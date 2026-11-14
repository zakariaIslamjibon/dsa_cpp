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

    void printAll(int id , string name, string dep, double cgpa)
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
    student doc1;
    doc1.printAll(2155,"Jibon", "CSE" ,3.54);


    return 0;
}