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
    static bool cmp(TreeNode *a, TreeNode *b)
    {
        return a->val < b->val;
    }

    void dfs(TreeNode *root, vector<TreeNode *> &a)
    {
        if (root == NULL)
        {
            return;
        }
        dfs(root->left, a);
        a.push_back(root);
        dfs(root->right, a);
    }
    void recoverTree(TreeNode *root)
    {
        vector<TreeNode *> a, b;
        dfs(root, a);
        b = a;
        TreeNode *x = NULL;
        TreeNode *y = NULL;
        TreeNode *z = NULL;
        TreeNode *zz = NULL;
        sort(b.begin(), b.end(), cmp);
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i]->val != b[i]->val)
            {
                x = y;
                y = a[i];
            }
        }
        swap(x->val, y->val);
        return;
    }
};