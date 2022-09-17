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
    
int res=0;
    map<int,int> mp;
    void helper(TreeNode* root){
        if(!root) 
            return;
        mp[root->val]+=1;
        if(!root->left and !root->right){
            int oddCount=0;
            for(auto it:mp) 
                oddCount+=(it.second%2!=0);
            res+=(oddCount<=1);
        }
        if(root->left) 
            helper(root->left);
        if(root->right) 
            helper(root->right);
        mp[root->val]-=1;
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root) 
            return 0;
        helper(root);
        return res;
    }
};