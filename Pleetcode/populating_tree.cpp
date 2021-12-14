#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    int l;
    Solution()
    {
        l = 0;
    }
    Node *connect(Node *root)
    {
        Node *a = root;
        if (a == NULL)
        {
            return NULL;
        }
        if (l == 0)
        {
            l++;
            a->next = NULL;
        }
        if (a->left != NULL)
        {
            a->left->next = a->right;
            connect(a->left);
        }
        if (a->right != NULL)
        {
            if (a->next != NULL)
            {
                a->right->next = a->next->left;
            }
            else
            {
                a->next = NULL;
            }
            connect(a->right);
        }
        return a;
    }
};