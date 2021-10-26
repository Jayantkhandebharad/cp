#include <bits/stdc++.h>
using namespace std;

//problem link: https://leetcode.com/problems/rotate-list/

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
    ListNode *rotateRight(ListNode *head, int k)
    {
        int a = 1;
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *aa = head;
        ListNode *bb = head;
        ListNode *ab = head;
        while (aa->next != NULL)
        {
            a++;
            aa = aa->next;
        }

        aa->next = bb;
        int c = k % a;
        c = a - c;
        for (int i = 0; i < c - 1; i++)
        {
            bb = bb->next;
        }
        ab = bb->next;
        bb->next = NULL;
        return ab;
    }
};