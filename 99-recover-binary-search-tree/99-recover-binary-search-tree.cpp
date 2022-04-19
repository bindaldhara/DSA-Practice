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
    TreeNode *head=NULL,*tail=NULL,*prev=NULL;

void help(TreeNode * root){
    if(root==NULL)
        return;
    help(root->left);
    if(prev!=NULL){
         if(prev->val > root->val){
             if(head==NULL){
                 head=prev;
             }
             tail=root;
         }
        
    }
    prev=root;
    help(root->right);
    
}
    
    
void recoverTree(TreeNode* root) {
    if(root==NULL)
        return;
    
   help(root);
   swap(head->val,tail->val);
    }
};

