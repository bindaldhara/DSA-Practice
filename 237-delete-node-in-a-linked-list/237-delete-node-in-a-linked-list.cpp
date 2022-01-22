/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* n;
        node->val = node->next->val;
        n = node->next; 
        if(n->next==NULL) node->next = NULL;
        else node->next = n->next;
        delete(n); 
    }
};