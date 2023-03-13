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
    bool check(TreeNode* tree1,TreeNode* tree2)
    {
        if(tree1==NULL or tree2==NULL)  
            return tree1==tree2;    
        
        if(check(tree1->left,tree2->right)==false)  
            return false;
        if(tree1->val!=tree2->val)  
            return false;
        if(check(tree1->right,tree2->left)==false) 
            return false;
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
        
    }
};