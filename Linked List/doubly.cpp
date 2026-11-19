#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }


};

class Doubly{
    Node* head;
    Node* tail;

    public:

    Doubly()
    {
        head = tail = NULL;
    }
    void push_front(int value)
    {
        Node* newdata = new Node(value);

        if (head == NULL)
        {
            head = tail = newdata;
            return;
        }
        else
        {
            newdata->next = head;
            head->prev = newdata;
            head = newdata;
        }
    }

    void push_back(int value)
    {
        Node* newdata = new Node(value);

        if (head == NULL)
        {
            head = tail = newdata;
            return;
        }
        else
        {
            tail->next = newdata;
            newdata->prev = tail;
            tail = newdata;
        }
    }

    void display()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
int main()
{
    Doubly dl;
    dl.push_front(10);

    dl.push_back(500);

    dl.display();
    return 0;
}