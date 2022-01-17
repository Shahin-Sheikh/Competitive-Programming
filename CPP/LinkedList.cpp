// A simple CPP program to introduce
// a linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;      // assign data in first node
    head->next = second; // Link first node with

    second->data = 2;

    // Link second node with the third node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = NULL;

    return 0;
}
