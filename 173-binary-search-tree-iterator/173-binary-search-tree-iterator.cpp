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
class BSTIterator {
public:
queue<TreeNode*> v;
    BSTIterator(TreeNode* root) {
        inOrder(root);
    }
    
    void inOrder(TreeNode* root){
        if(!root) return;
        inOrder(root->left);
        v.push(root);
        inOrder(root->right);
    }
    
    int next() {
        int res = v.front()->val;
        v.pop();
        return res;
    }
    
    bool hasNext() {
        return !v.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */