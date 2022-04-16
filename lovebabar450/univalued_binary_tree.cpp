//965. Univalued Binary Tree

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
    bool isUnivalTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        bool flag = true;
        if (root->left == NULL)
        {
        }
        else if (root->left->val == root->val)
        {
            flag = flag & isUnivalTree(root->left);
        }
        else
        {
            flag = false;
        }
        if (root->right == NULL)
        {
        }
        else if (root->right->val == root->val)
        {
            flag = flag & isUnivalTree(root->right);
        }
        else
        {
            flag = false;
        }
        return flag;
    }
};