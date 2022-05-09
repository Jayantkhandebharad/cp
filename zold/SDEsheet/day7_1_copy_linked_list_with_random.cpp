/*
138. Copy List with Random Pointers
A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:
*/

#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (!head)
            return nullptr;

        Node *cur = head;

        //bulid the interweaving list
        while (cur)
        {
            Node *node = new Node(cur->val);
            node->next = cur->next;
            cur->next = node;
            cur = node->next;
        }

        //assign "random"
        cur = head;
        Node *newcur;

        while (cur)
        {
            newcur = cur->next;
            newcur->random = cur->random ? cur->random->next : nullptr;
            cur = cur->next->next;
        }

        //split the interleaving list to two lists
        Node *newhead = head->next;
        newcur = newhead;
        cur = head;
        while (newcur)
        {
            Node *next = cur->next ? cur->next->next : nullptr;
            Node *newnext = newcur->next ? newcur->next->next : nullptr;
            cur->next = cur->next ? cur->next->next : nullptr;
            newcur->next = newcur->next ? newcur->next->next : nullptr;
            newcur = newnext;
            cur = next;
        }

        return newhead;
    }
};