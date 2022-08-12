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
      int getSum(TreeNode* root,int &res){
        if(root==NULL) 
            return 0;
        int lft = max(0,getSum(root->left,res));
        int rght = max(0,getSum(root->right,res));
        if(lft+rght+root->val >res) 
            res= lft+rght+root->val;
        return root->val + max(lft,rght);
    }
    
    int maxPathSum(TreeNode* root) {
        if(root==NULL) 
            return 0;
        int res = root->val;
        getSum(root,res);
        return res;
    }
};