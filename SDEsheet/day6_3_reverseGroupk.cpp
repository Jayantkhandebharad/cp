/*Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
k is a positive integer and is less than or equal to the length of the linked list. 
If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.*/
//problem link: https://leetcode.com/problems/reverse-nodes-in-k-group/

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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || k == 1)
            return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *cur = dummy, *nex = dummy, *per = dummy;
        int count = 0;

        while (cur->next != NULL)
        {
            cur = cur->next;
            count++;
        }

        while (count >= k)
        {
            cur = per->next;
            nex = cur->next;
            for (int i = 1; i < k; i++)
            {
                cur->next = nex->next;
                nex->next = per->next;
                per->next = nex;
                nex = cur->next;
            }
            per = cur;
            count -= k;
        }
        return dummy->next;
    }
};