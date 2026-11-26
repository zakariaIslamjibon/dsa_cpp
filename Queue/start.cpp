
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node (int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue 
{
    Node* head;
    Node* tail;

    public:

    Queue()
    {
        head = tail = NULL;
    }

    void push(int value)
    {
        Node* newNode = new Node(value);

        if (empty())
        {
            head = tail = newNode;
        }
        else
        { 
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        else
        {
            Node* temp = head;
            head = temp->next;
            delete temp;

            if (head == NULL)
            {
                tail = NULL;
            }
        }
    }

    int front()
    {
        if (empty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else 
        {
            return head->data;
        }
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;

    return 0;
}
