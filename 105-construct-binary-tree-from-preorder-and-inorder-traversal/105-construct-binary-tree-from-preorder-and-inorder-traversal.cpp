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
    int search(vector<int> in, int l, int h, int k){
        int i;
        for(i = l; i <= h; i++){
            if(in[i] == k)
                break;
        }
        return i;
    }
    
    TreeNode* solve(TreeNode *root, vector<int> pre, vector<int> in, int l, int h, int &p){
        if(l > h)       
            return NULL;
        root = new TreeNode(pre[p]);
        p += 1;
        if(l == h)
            return root;
        int i = search(in, l, h, pre[p-1]);
        
        root->left = solve(root->left, pre, in, l, i-1, p);
        root->right = solve(root->right, pre, in, i+1, h, p);
        return root;
        }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *root = NULL;
        int p = 0;
        root = solve(root, preorder, inorder, 0, inorder.size()-1, p);
        return root;
    }
};