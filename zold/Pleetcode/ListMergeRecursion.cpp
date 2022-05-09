
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//can have better solution /just to learn recurssion

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL and list2 == NULL)
        {
            return NULL;
        }
        else if (list1 == NULL)
        {
            return new ListNode(list2->val, mergeTwoLists(list1, list2->next));
        }
        else if (list2 == NULL)
        {
            return new ListNode(list1->val, mergeTwoLists(list1->next, list2));
        }
        else if (list1->val > list2->val)
        {
            return new ListNode(list2->val, mergeTwoLists(list1, list2->next));
        }
        return new ListNode(list1->val, mergeTwoLists(list1->next, list2));
    }
};
