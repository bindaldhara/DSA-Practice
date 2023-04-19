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
        int res = 0 ;
    void helper(TreeNode* root , char side , int len){
      if(root == NULL){
        return ;
      }

      res = max(len, res);
      helper(root->left , 'L' , side=='L' ?1:len + 1);
      helper(root->right , 'R' , side=='R' ?1:len + 1);
    }
    int longestZigZag(TreeNode* root) {
        helper(root , 'M',0);
        return res ;
    }
};