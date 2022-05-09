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
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        queue<TreeNode *> q;
        q.push(root);
        int depth = 0;
        while (q.size())
        {
            int n = q.size();
            depth++;
            for (int i = 0; i < n; i++)
            {
                TreeNode *x = q.front();
                q.pop();
                if (x->left != NULL)
                {
                    q.push(x->left);
                }
                if (x->right != NULL)
                {
                    q.push(x->right);
                }
            }
        }
        return depth;
    }
};