#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/deepest-leaves-sum/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int s=0;
        int ss=0;
        while(!q.empty()){
            TreeNode* a = q.front();
            q.pop();
            if(a==NULL){
                ss=sum;
                sum = s;
                s=0;
                if(!q.size()){
                    return sum;
                }
                q.push(NULL);
                continue;
            }
            if(a->left!=NULL){
                q.push(a->left);
            }
            if(a->right!=NULL){
                q.push(a->right);
            }
            s+=a->val;
        }
        return sum;
    }
};