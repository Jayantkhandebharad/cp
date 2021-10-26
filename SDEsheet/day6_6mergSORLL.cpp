/*
Flattening a Linked List

Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 
Note: The flattened list will be printed using the bottom pointer instead of next pointer.


problem link: https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1#
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

/*  Function which returns the  root of 
    the flattened linked list. */

Node *merge(Node *a, Node *b)
{
    Node *temp = new Node(0);
    Node *res = temp;
    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
        {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else
        {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }
    if (a != NULL)
        temp->bottom = a;
    else
        temp->bottom = b;
    return res->bottom;
}

Node *flatten(Node *root)
{
    if (root == NULL || root->next == NULL)
    {
        return root;
    }
    root->next = flatten(root->next);
    root = merge(root, root->next);
    return root;
}