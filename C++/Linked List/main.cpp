#include <iostream>

class Node
{
public:
    Node *next;
    int data;
};

int main()
{
    Node *head = new Node();

    head->next = nullptr;
    head->data = 10;

    return 0;
}