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
       if(!head or !head->next)
           return head;
        ListNode* prev=head;
        ListNode* prev1=NULL;
        ListNode* nxt=head->next;
        if(!nxt){
            nxt->next=prev;
            return nxt;
        }
        ListNode* temp=head;
        bool flag=true;
        while(temp && temp->next){
            if(flag){
                head=temp->next;
                flag=false;
            }
            
            nxt=temp->next->next;
            if(prev1==NULL)
                prev1=temp;
            else
            {
                prev1->next=temp->next;
                prev1=temp;
            }
            temp->next->next=prev;
            prev->next=nxt;
            prev=nxt;
            temp=nxt;
        }
        return head; 
    }
};