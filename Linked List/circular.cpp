#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int value)
    {
        data = value;
        next = NULL;

    }
};

class Circular {
    Node* head;
    Node* tail;

    public:

    Circular()
    {
        head = tail = NULL;
    }

    void insert(int value)
    {
        Node* newdata = new Node(value);
        if (head == NULL)
        {
            head = tail = newdata;
            tail->next = head;
            return;
        }
        else
        {
            newdata->next = head;
            head = newdata;
            tail->next = head;
        }
    }


    void display()
    {
    Node* temp = head;

    if (head == NULL)
    {
        cout << "Empty Node" << endl;
        return;
    }

    while (temp->next != head)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    cout << temp->data << endl;
}


void pop()
{
    Node* temp = head;

    if (head == NULL)
    {
        cout << "Empty Node" << endl;
        return;
    }

    if (head == tail)
    {
        head = tail = NULL;
    }
    else
    {
        head = head->next;
        tail->next = head;
    }

    temp->next = NULL;
    delete temp;
}


};
int main ()
{
    Circular li;
    
    li.insert(60);
    li.insert(70);

    li.pop();
    li.display();
    return 0;
}