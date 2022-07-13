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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == 0){
        
        return { };
    }
    
    queue <TreeNode*> q;
    
    vector<vector<int>> res;
    
    q.push(root);
    
    while(!q.empty( )){
        
        int count = q.size( );
        
        vector <int>  temp;
        
        while(count--){
            
            
            TreeNode* cur = q.front( );
            q.pop();
            
            temp.push_back(cur->val);
            
            if(cur->left){
                
                q.push(cur->left);
            }
            
            if(cur->right){
                
                q.push(cur->right);
            }
            
        }
        
        res.push_back(temp);
        
    }
    
    return res;
    
}
    
};