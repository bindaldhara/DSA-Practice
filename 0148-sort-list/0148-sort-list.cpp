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
    ListNode *merge(ListNode *l1,ListNode *l2){
        if(l1==NULL&&l2==NULL)
            return NULL;
        else if(l1==NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        else if(l1->val < l2->val){
            l1->next = merge(l1->next,l2);
            return l1;
        }
          else {
            l2->next = merge(l1,l2->next);
              return l2;
        }
    }
    ListNode* sortList(ListNode* head) {
     if(head==NULL||head->next==NULL)
         return head;
        ListNode *temp=NULL;
        ListNode *slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(slow);
        return merge(l1,l2);
        
    }
};