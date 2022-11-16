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
    void inorder(TreeNode* root,int &k,int &count,int &res){
        if(!root) 
            return;
        inorder(root->left,k,count,res);
        count++;
        if(count==k) 
            res=root->val;  
        inorder(root->right,k,count,res);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int res=0;
        inorder(root,k,count,res);
        return res;
    }
};