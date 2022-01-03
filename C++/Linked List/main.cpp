#include <iostream>

class Node
{
public:
    Node *next;
    int data;
};

/*
    @return size of Linked List
*/
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

/*
    Push Node to the front of linked list.
*/
void push(Node **head, int data)
{
    Node * new_node = new Node();
    new_node->next = (*head);
    new_node->data = data;
    (*head) = new_node;
}

void printList(Node *n)
{
    while(n != nullptr)
    {
        std::cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    return 0;
}
