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
     void inorder(TreeNode* root,vector<int> &ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back({root->val});
        inorder(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        TreeNode* curr = new TreeNode(ans[0]);
        TreeNode* head = curr;
        TreeNode* next;
        int n = ans.size();
        for(int i=1;i<n;i++){
            next = new TreeNode(ans[i]);
            curr->right = next;
            curr = curr->right;
        }
        return head;
    }
};