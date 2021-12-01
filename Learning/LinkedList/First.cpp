#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link;
};
Node *head = NULL; //global
int main()
{
    Node *ptr = new Node();
    ptr->data = 10;
    ptr->link = NULL;
    head = ptr;
    return 0;
}