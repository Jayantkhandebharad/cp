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
    TreeNode *left(TreeNode *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        return root->left;
    }
    TreeNode *right(TreeNode *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        return root->right;
    }

    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        TreeNode *x;
        if (root1 == NULL)
        {
            return root2;
        }
        if (root2 == NULL)
        {
            return root1;
        }
        x = new TreeNode(root1->val + root2->val);

        x->left = mergeTrees(left(root1), left(root2));
        x->right = mergeTrees(right(root1), right(root2));

        return x;
    }
};