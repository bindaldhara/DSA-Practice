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
    
    void solve(TreeNode* root,int mx,int &cnt){
        if(!root)
            return;
        if(root->val>=mx){
            cnt++;
            mx=root->val;
            cout<<root->val<<" ";
        }
        solve(root->left,mx,cnt);
        solve(root->right,mx,cnt);
    }
    int goodNodes(TreeNode* root) {
        if(!root)
            return NULL;
        int cnt=0;
        solve(root,INT_MIN,cnt);
        return cnt;
    }
};

