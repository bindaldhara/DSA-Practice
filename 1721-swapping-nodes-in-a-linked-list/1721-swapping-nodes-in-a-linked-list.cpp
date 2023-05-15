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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr=head;
           int n=k-1;
           while(n>0){
               ptr=ptr->next;
               n--;
           }
           ListNode* frnt=ptr;
           ListNode* back=head;
        
          while(ptr!=NULL && ptr->next!=NULL){
              back=back->next;
              ptr=ptr->next;
          }
        
        swap(frnt->val,back->val);
        return head;
    }
};