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

class List
{
    Node* head;
    Node* tail;

    public:
        List()
        {
            head = tail = NULL;
        }

        void push_front(int value)
        {
            Node* newData = new Node(value);

            if (head == NULL)
            {
                head = tail = newData;
                return;
            }
            else 
            {
                newData->next = head;
                head = newData;
            }
        }

        void display()
        {
            Node* temp = head;
            while( temp != NULL)
            {
                cout << temp->data <<endl;
                 temp = temp->next;
            }
        }
};
int main ()
{
    List l1;
    l1.push_front(456);
    l1.display();
    return 0;
}