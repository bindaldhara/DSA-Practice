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
    void rootToLeafPath(TreeNode* root, vector<int> arr, vector<vector<int>> &res){
        if(root == NULL)
            return;
        arr.push_back(root -> val);
        if(root -> left == NULL && root -> right == NULL){
            res.push_back(arr);
            return;
        }
        rootToLeafPath(root -> left, arr, res);
        rootToLeafPath(root -> right, arr, res);
    }
    int decimal(vector<int> nums){
        int n = nums.size();

        int ans = 0;
        for(int i = 0; i < n; i++)
            ans = ans + (nums[i] * pow(2, n - 1 - i));
    
        return ans;
    }
    
    int sumRootToLeaf(TreeNode* root) {
        if(root == NULL)
            return 0;
        vector<int> arr;
        vector<vector<int>>res;
        rootToLeafPath(root, arr, res);
        int sol = 0;
        for(int i = 0; i < res.size(); i++)
            sol = sol + decimal(res[i]);
        return sol;
        
    }
};