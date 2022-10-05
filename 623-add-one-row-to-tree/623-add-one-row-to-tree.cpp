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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode *l,*r;
        if(depth == 1){
            l = root;
            root = new TreeNode(val);
            root->left = l;
            return root;
        } 
        int currDepth = 1;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode *front = q.front();
                
                if(currDepth == depth-1){ 
                    l = front->left;
                    front->left = new TreeNode(val);
                    front->left->left = l;
                  
                    r = front->right;
                    front->right = new TreeNode(val);
                    front->right->right = r;
                  
                }
                else {
                    if(front->left){
                        q.push(front->left);
                    }
                    if(front->right){
                        q.push(front->right);
                    }
                }   
                q.pop();
            }
            currDepth++;
        }
        return root;
    }
};