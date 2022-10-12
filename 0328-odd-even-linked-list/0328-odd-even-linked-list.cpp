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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddtail= new ListNode(-1),*oddhead=oddtail,*eventail=new ListNode(-1),*evenhead=eventail;
        int i=1;
        while(head){
            if(i){
                oddtail->next=head;
                head=head->next;
                oddtail=oddtail->next;
                oddtail->next=NULL;
            }
            else{
                eventail->next=head;
                head=head->next;
                eventail=eventail->next;
                eventail->next=NULL;
            }
            i^=1;
        }
        oddtail->next=evenhead->next;
        return oddhead->next;
    }
    
};