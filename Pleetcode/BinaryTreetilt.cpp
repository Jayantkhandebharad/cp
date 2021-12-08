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
    int findsum(TreeNode *root, int &tilt)
    {
        if (!root)
            return 0;
        int l = findsum(root->left, tilt);
        int r = findsum(root->right, tilt);
        tilt += abs(l - r);
        return l + r + root->val;
    }

public:
    int findTilt(TreeNode *root)
    {
        int tilt = 0;
        findsum(root, tilt);
        return tilt;
    }
};