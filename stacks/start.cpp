#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<int> v;

    public:

    void push(int value)
    {
        v.push_back(value);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v[v.size()-1];
    }

    bool empty()
    {
        return v.size()== 0;
    }

    
};
int main ()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty())
    {
        cout <<s.top()<< endl;
        s.pop();
    }
    return 0;
}