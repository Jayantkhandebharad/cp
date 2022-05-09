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
    ListNode *swapNodes(ListNode *head, int k)
    {
        int n = 0;
        ListNode *item = head;
        n = 1;
        while (item != NULL)
        {
            item = item->next;
            n++;
        }
        int x = n - k;
        item = head;
        int i = 1;
        while (i != k)
        {
            item = item->next;
            i++;
        }
        i = 1;
        ListNode *item1 = head;
        while (i != x)
        {
            item1 = item1->next;
            i++;
        }
        int r = item->val;
        item->val = item1->val;
        item1->val = r;
        return head;
    }
};