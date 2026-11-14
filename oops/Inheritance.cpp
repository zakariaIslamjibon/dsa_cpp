#include <iostream>
#include <string>
using namespace std;

class student 
{
    public:
         int id;
         string name;
         string number;

         student(int id, string name, string number)
         {
            this->id = id;
            this->name = name;
            this->number = number;
         }

};

class techer : public student
{
    public:
         string dep;

         techer(int id,string name,string number,string dep):student(id,name,number)
         {
            this->dep = dep;
         }
         void display()
         {
            cout << "id:"  << id<< endl;
            cout << "Name :" << name<< endl;
            cout << "Number :" << number<< endl;
            cout << "Dep :"<< dep << endl;
         }
};
int main ()
{
    techer s1 (5551, "Jibon", "013425843", "CSE");
  
    techer s2 (55294, "Zakaria", "01315643", "BBA");
    s1.display();
    s2.display();
    return 0;
}