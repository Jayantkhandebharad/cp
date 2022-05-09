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
    ListNode *reverseListIteration(ListNode *head) //INPLACE REVERSAL OF LINKED LIST
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *behind = nullptr;
        ListNode *present = head;
        ListNode *ahead = head->next;
        while (present != nullptr)
        {
            present->next = behind;
            behind = present;
            present = ahead;
            if (ahead != nullptr)
                ahead = ahead->next;
        }
        head = behind;
        return head;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *revl1Head = reverseListIteration(l1);
        ListNode *revl2Head = reverseListIteration(l2);
        ListNode *temp1 = revl1Head;
        ListNode *temp1prev = nullptr;
        ListNode *temp2 = revl2Head;
        while (temp1 != nullptr && temp2 != nullptr)
        {
            temp1->val = temp1->val + temp2->val;
            temp1prev = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if (temp2 != nullptr)
            temp1prev->next = temp2;
        temp1 = revl1Head;
        while (temp1 != nullptr)
        {
            if (temp1->val > 9)
            {
                temp1->val = (temp1->val % 10);
                if (temp1->next != nullptr)
                    temp1->next->val = temp1->next->val + 1;
                else
                {
                    ListNode *newListNode = new ListNode(1);
                    temp1->next = newListNode;
                }
            }
            temp1 = temp1->next;
        }
        return reverseListIteration(revl1Head);
    }
};