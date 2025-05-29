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
    void helper(int index,TreeNode*root,int& maxdepth){
        if(root==NULL)return;
        maxdepth=max(maxdepth,index);
        helper(index+1,root->right,maxdepth);
        helper(index+1,root->left,maxdepth);
    }
    int maxDepth(TreeNode* root) {
        int maxdepth=0;
        helper(1,root,maxdepth);
        return maxdepth;
    }
};