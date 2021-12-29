#include <iostream>

class Node
{
public:
    Node *next;
    int data;
};

int sizeLinkedList(Node *n)
{
    int counter = 0;

    while (n != nullptr)
    {
        counter++;
        n = n->next;
    }

    return counter;
}

int main()
{
    Node *head = new Node();
    head->next = sec;
    head->data = 5;

    return 0;
}