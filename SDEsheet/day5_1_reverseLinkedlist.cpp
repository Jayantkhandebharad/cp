/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/
//problem Link: https://leetcode.com/problems/reverse-linked-list/

#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *aa = NULL;
        while (head != NULL)
        {
            ListNode *a = new ListNode(head->val);
            head = head->next;
            a->next = aa;
            aa = a;
        }
        return aa;
    }
};