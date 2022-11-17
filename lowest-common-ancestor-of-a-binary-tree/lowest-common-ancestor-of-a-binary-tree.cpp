/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if (root == NULL)
            return NULL;
        if (root->val == p->val || root->val == q->val)
            return root;
        
        TreeNode *LCAleft = lowestCommonAncestor(root->left, p, q);
        TreeNode *LCAright = lowestCommonAncestor(root->right, p, q);

        if (LCAleft != NULL and LCAright != NULL)
            return root;
        
        if (LCAleft != NULL)
            return LCAleft;
        else
            return LCAright;
        
    }
};