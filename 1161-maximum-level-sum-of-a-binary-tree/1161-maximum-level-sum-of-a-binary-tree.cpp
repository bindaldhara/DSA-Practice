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
    int maxLevelSum(TreeNode* root) {
        int level=1;
        queue<TreeNode*> q;
        q.push(root);
        int ans;
        int maxsum=INT_MIN;

        while(!q.empty()){
            int sz=q.size();
            int s=0;
            for(int i = 0;i<sz;i++){
                auto p = q.front();
                q.pop();
                s=s+p->val;
                if(p->left) 
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
            if(s>maxsum){
                maxsum=s;
                ans=level;
            }
            
            level++;
        }
        return ans;
    }
};