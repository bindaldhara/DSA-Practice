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
    void helper(TreeNode* root,int target,int sum,vector<int>& temp,vector<vector<int>>& res){
        if(root==NULL) 
            return;
        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL && sum+root->val==target){
            res.push_back(temp);
            temp.pop_back();
            return;
        }
        helper(root->left,target,sum+root->val,temp,res);
        helper(root->right,target,sum+root->val,temp,res);
        temp.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>> res;
        vector<int> temp;
        helper(root, targetSum, 0, temp, res);
        return res;  
    }
};