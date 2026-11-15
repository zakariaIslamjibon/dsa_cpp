
#include <iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node* Next;

    Node(int value)
    {
        Data = value;
        Next = NULL;
    }
};

class List
{
private:
    Node* Head;
    Node* Tail;

public:
    List()
    {
        Head = Tail = NULL;
    }

    void push_front(int value)
    {
        Node* newNode = new Node(value);

        if (Head == NULL)
        {
            Head = Tail = newNode;
            return;
        }
        else
        {
            newNode->Next = Head;
            Head = newNode;
        }
    }

    void display()
    {
        Node* temp = Head;

        while (temp != NULL)
        {
            cout << temp->Data << " ";
            temp = temp->Next;
        }

        cout << endl;
    }
};

int main()
{
    List L1;

    L1.push_front(1);
    L1.push_front(2);
    L1.push_front(3);

    L1.display();

    return 0;
}
