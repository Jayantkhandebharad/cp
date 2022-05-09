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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL or head->next == NULL)
        {
            return head;
        }
        else
        {
            int data = head->val;
            head->val = head->next->val;
            head->next->val = data;
        }
        head->next->next = swapPairs(head->next->next);
        return head;
    }
};