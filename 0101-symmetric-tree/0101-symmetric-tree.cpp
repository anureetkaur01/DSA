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
    bool isSymmetricHelp(TreeNode *lefttree,TreeNode *righttree){
        if(lefttree==NULL || righttree==NULL)
        return lefttree==righttree;

        if(lefttree->val!=righttree->val)
        return false;

        return isSymmetricHelp(lefttree->left,righttree->right) 
        && isSymmetricHelp(lefttree->right,righttree->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return NULL;

        return isSymmetricHelp(root->left,root->right);
    }
};