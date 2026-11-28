
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

    public:

    Queue()
    {
        head = tail = NULL;
    }

    void push(int value)
    {
        Node* newdata = new Node(value);

        if (head == NULL)
        {
            head = tail = newdata;
        }
        else
        {
            tail->next = newdata;
            tail = newdata;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;

        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        if (head == NULL)
        {
            cout << "Queue is empty"<< endl;
            return -1;
        }

        return head->data;
    }

    bool empty()
    {
        return head == NULL;
    }

    void display()
    {
        Node* temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

};

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.display();

    cout << "Front: " << q.front() << endl;

    q.pop();

    q.display();

    return 0;
}
