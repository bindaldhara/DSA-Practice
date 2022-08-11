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
    void reorderList(ListNode* head) {
     ListNode *slow=head;
     ListNode *fast=head;
     ListNode *h1=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode *h2=slow->next;
    slow->next=NULL;
        
    ListNode *p=h2;
    ListNode *q=NULL;
    ListNode *r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
  
    while(h1!=NULL && q!=NULL){
        ListNode *temp1=h1->next;
        h1->next=q;
        ListNode *temp2=q->next;
        q->next=temp1;
        h1=temp1;
        q=temp2;
    }
}
};