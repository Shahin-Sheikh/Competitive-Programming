#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->link;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    head->data = 10;
    head->link = second;
    second->data = 20;
    second->link = third;
    third->data = 30;
    third->link = NULL;
    printList(head);
    return 0;
}