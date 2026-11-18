
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int value) {
        Node* newData = new Node(value);

        if (head == NULL) {
            head = tail = newData;
            return;
        }

        newData->next = head;
        head = newData;
    }

    void push_back(int value) {
        Node* newData = new Node(value);

        if (head == NULL) {
            head = tail = newData;
            return;
        }

        tail->next = newData;
        tail = newData;
    }

    void insert(int value, int pos) {
        if (pos < 0) {
            cout << "Invalid Position" << endl;
            return;
        }

        if (pos == 0) {
            push_front(value);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid Position" << endl;
                return;
            }

            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid Position" << endl;
            return;
        }

        Node* newData = new Node(value);

        newData->next = temp->next;
        temp->next = newData;

        if (newData->next == NULL) {
            tail = newData;
        }
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    ~List() {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    List li;

    li.push_front(100);
    li.push_back(200);
    li.push_back(400);

    li.insert(300, 2);

    li.display();

    return 0;
}
