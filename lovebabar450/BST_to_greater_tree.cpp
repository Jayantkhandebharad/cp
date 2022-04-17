//538. Convert BST to Greater Tree

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
    int l(TreeNode *root, int val1)
    {
        if (root == NULL)
        {
            return 0;
        }

        if (root->right != NULL)
        {
            root->val += l(root->right, val1);
        }
        else
        {
            root->val += val1;
        }

        int x = root->val;
        if (root->left != NULL)
        {
            x = l(root->left, root->val);
        }

        return x;
    }
    TreeNode *convertBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return root;
        }
        root->val += l(root->right, 0);
        l(root->left, root->val);
        return root;
    }
};