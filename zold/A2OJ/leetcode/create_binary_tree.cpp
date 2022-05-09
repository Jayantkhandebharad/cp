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
    TreeNode *createBinaryTree(vector<vector<int>> &d)
    {
        unordered_map<int, TreeNode *> a;
        set<int> s;
        for (auto i : d)
        {
            a[i[1]] = new TreeNode(i[1]);
            s.insert(i[1]);
            //cout<<i[1]<<" ";
        }

        unordered_map<int, int> x;
        TreeNode *as;
        for (auto i : d)
        {
            int l = s.size();
            s.insert(i[0]);
            if (l != s.size())
            {
                //cout<<i[0]<<" ";
                a[i[0]] = new TreeNode(i[0]);
                as = a[i[0]];
            }
        }

        for (auto i : d)
        {
            if (i[2] == 1)
            {
                a[i[0]]->left = a[i[1]];
            }
            else
            {
                a[i[0]]->right = a[i[1]];
            }
        }

        return as;
    }
};