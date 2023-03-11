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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> temp;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            long long sum = 0;
            int size = q.size();
            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
                if(node->left) 
                    q.push(node->left);
                if(node->right) 
                    q.push(node->right);
            }
            temp.push_back(sum);
        }
        if(temp.size() < k) 
            return -1;
        sort(temp.begin(), temp.end());
        return temp[temp.size()-k];
    }
};