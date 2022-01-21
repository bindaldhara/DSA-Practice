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
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
        if(root->right==NULL and root->left == NULL) 
            return;
        
        if(root->left != NULL) {
            TreeNode *t = root->left;
            TreeNode *temp = t;
            while(t->right != NULL) 
            t = t->right;
            t->right = root->right;
            root->right = temp;
            root->left = NULL;
        }
        flatten(root->right);
    }
};