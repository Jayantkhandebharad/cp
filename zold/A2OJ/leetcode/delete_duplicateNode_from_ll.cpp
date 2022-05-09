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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        if (head == NULL or head->next == NULL)
        {
            return head;
        }
        ListNode *prehead = new ListNode(-101);
        prehead->next = head;
        ListNode *temp1 = prehead->next;
        ListNode *temp2 = prehead->next;
        unordered_map<int, int> m;
        while (temp != NULL)
        {
            m[temp->val]++;
            temp = temp->next;
        }

        temp = prehead;
        int x = 0;
        while (temp != NULL and temp1 != NULL)
        {
            if (m[temp1->val] > 1)
            {
                temp1 = temp1->next;
                continue;
            }
            x++;
            cout << temp1->val;
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
        temp->next = NULL;
        // if(x==0){
        //     return NULL;
        // }
        return prehead->next;
    }
};