/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* helper(int i,int j,vector<int>&temp){
        if(i>j)
            return NULL;
        int mid = (i+j)/2;
        TreeNode* root = new TreeNode(temp[mid]);
        root->left = helper(i,mid-1,temp);
        root->right = helper(mid+1,j,temp);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>temp;
        int i=0;
        while(head){
            temp.push_back(head->val);
            head=head->next;
        }
        int j=temp.size();
        return helper(i,j-1,temp);
        
    }
};