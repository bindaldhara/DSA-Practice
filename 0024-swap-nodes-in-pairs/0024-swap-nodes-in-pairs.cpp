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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL)
        return NULL;
        ListNode* curr=head->next;
        ListNode* prev=head;
        int i=0;

        while(curr!=NULL){
            if(i%2==0){
                swap(curr->val,prev->val);
            }
            prev=curr;
            curr=curr->next;
            i++;
        }
        return head;
    }
};