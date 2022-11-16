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
    void traverse(TreeNode* root, vector<int>&vec){
        if(!root)
            return;
        traverse(root->left,vec);
        vec.push_back(root->val);
        traverse(root->right,vec); 
    }
        
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vec;
        traverse(root,vec);
        return vec;
    }
};