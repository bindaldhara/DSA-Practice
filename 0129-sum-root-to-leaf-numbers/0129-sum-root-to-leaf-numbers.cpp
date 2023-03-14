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
    int helper(TreeNode* root, int sum) {
        sum = sum * 10 + root->val;
        if (root->left != nullptr and root->right != nullptr) 
            return helper(root->left, sum) + helper(root->right, sum);
        else if (root->left != nullptr) 
            return helper(root->left, sum);
        else if (root->right != nullptr) 
            return helper(root->right, sum);
        else 
			return sum;
	}

public:
    int sumNumbers(TreeNode* root) {
        if (root == nullptr) 
            return 0;
        else 
            return helper(root, 0);
    }
};

