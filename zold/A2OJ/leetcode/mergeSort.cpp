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

class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        if (head == NULL or head->next == NULL)
        {
            return head;
        }

        ListNode *temp = new ListNode(0);
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL and fast->next != NULL)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;

        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(slow);

        return mergeList(l1, l2);
    }

    ListNode *mergeList(ListNode *l1, ListNode *l2)
    {
        ListNode *x = new ListNode(0);
        ListNode *y = x;
        while (l1 != NULL and l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                x->next = l1;
                x = x->next;
                l1 = l1->next;
            }
            else
            {
                x->next = l2;
                l2 = l2->next;
                x = x->next;
            }
        }
        if (l1 != NULL)
        {
            x->next = l1;
        }
        else if (l2 != NULL)
        {
            x->next = l2;
        }
        return y->next;
    }
};