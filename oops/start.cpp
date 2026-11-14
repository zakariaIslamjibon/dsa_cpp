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

};
int main ()
{
    student doc1;
    doc1.id = 20157;
    doc1.name = "Jibon";
    doc1.dep = "CSE";
    doc1.cgpa = 3.12;

    cout << doc1.id << endl <<doc1.name <<endl <<doc1.dep  << endl << doc1.cgpa <<endl;
    return 0;
}