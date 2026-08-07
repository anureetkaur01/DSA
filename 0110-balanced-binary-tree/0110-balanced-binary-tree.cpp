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
    int h=0;
    int checkHeight(TreeNode *root){
        if(root==NULL)
        return 0;

        int lefttree=checkHeight(root->left);
        int righttree=checkHeight(root->right);

        if(abs(lefttree-righttree)>1)
        h=abs(lefttree-righttree);

        return max(lefttree,righttree)+1;

    }
    bool isBalanced(TreeNode* root) {
       int ans=checkHeight(root);
       if(h==0) return true;
        return false;
    }
};