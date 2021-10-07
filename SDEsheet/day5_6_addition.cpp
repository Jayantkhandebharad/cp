/*You are given two non-empty linked lists representing two non-negative integers. The digits 
are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

//problem link: https://leetcode.com/problems/add-two-numbers/

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = NULL;
        int carry = 0;
        if (l1->val + l2->val > 9)
        {
            ListNode *aa = new ListNode(l1->val + l2->val + carry - 10);
            l3 = aa;
            carry = 1;
            l1 = l1->next;
            l2 = l2->next;
        }
        else
        {
            ListNode *aa = new ListNode(l1->val + l2->val + carry);
            carry = 0;
            l3 = aa;
            l1 = l1->next;
            l2 = l2->next;
        }
        ListNode *temp = l3;
        while (l1 != NULL and l2 != NULL)
        {
            if (l1->val + l2->val + carry > 9)
            {
                ListNode *aa = new ListNode(l1->val + l2->val + carry - 10);
                temp->next = aa;
                carry = 1;
            }
            else
            {
                ListNode *aa = new ListNode(l1->val + l2->val + carry);
                temp->next = aa;
                carry = 0;
            }
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL)
        {
            if (l1->val + carry > 9)
            {
                ListNode *aaa = new ListNode(l1->val + carry - 10);
                l1 = l1->next;
                carry = 1;
                temp->next = aaa;
                temp = temp->next;
            }
            else
            {
                ListNode *aaa = new ListNode(l1->val + carry);
                l1 = l1->next;
                carry = 0;
                temp->next = aaa;
                temp = temp->next;
            }
        }
        while (l2 != NULL)
        {
            if (l2->val + carry > 9)
            {
                ListNode *aaa = new ListNode(l2->val + carry - 10);
                l2 = l2->next;
                carry = 1;
                temp->next = aaa;
                temp = temp->next;
            }
            else
            {
                ListNode *aaa = new ListNode(l2->val + carry);
                l2 = l2->next;
                carry = 0;
                temp->next = aaa;
                temp = temp->next;
            }
        }
        if (carry == 1)
        {
            ListNode *aaa = new ListNode(1);
            temp->next = aaa;
        }
        return l3;
    }
};