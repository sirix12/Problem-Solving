#include <stdio.h>
#include <iostream>

using namespace std;

class Node
{
public:
    int elem;
    Node *prev;
    Node *next;

    Node(int value)
    {
        elem = value;
        prev = nullptr;
        next = nullptr;
    }
};

class doubly
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    doubly()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    };
    void insertFirst(int elem)
    {
        Node *temp = new Node(elem);
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    };
    void insertLast(int elem)
    {
        Node *temp = new Node(elem);
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
        size++;
    };

    void printList()
    {
        Node *current = head;
        while (current != nullptrptr)
        {
            cout << current->elem << " -> ";
            current = current->next;
        }
        cout << "nullptrptr\n";
    }
};

int main()
{
    int a = 5;
    doubly list;
    list.insertFirst(a);
    list.printList();
};