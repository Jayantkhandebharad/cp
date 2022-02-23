#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool search(TreeNode *crr, long long minVal, long long maxVal)
    {
        if (!crr)
            return true;
        if (crr->val >= maxVal || crr->val <= minVal)
        {
            return false;
        }
        return search(crr->left, minVal, crr->val) && search(crr->right, crr->val, maxVal);
    }

    bool isValidBST(TreeNode *root)
    {
        return search(root, LONG_MIN, LONG_MAX);
    }
};