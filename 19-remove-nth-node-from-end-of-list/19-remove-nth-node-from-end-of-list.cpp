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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        
        count=count-n+1;
        ListNode *todel;
        if(count==1){ 
            temp=head;
            todel=head;
            head=temp->next;
            delete todel;
            return head;
        }
        int num=1; 
        temp=head;
        while(num<count-1){
            temp=temp->next;
            num++;
        }
        todel=temp->next;
        temp->next=temp->next->next;
        delete todel;
        return head;
    }
};