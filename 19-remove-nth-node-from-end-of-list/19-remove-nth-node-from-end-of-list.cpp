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
        ListNode* h1=head,*h2=head;
        int cnt=0,temp=1;
        while(h1!=NULL){
            cnt++;
            h1=h1->next;
        }
        if(cnt==n)
            return head->next;
        while(temp!=cnt-n && h2){
            h2=h2->next;
            temp++;
        }
        h2->next=h2->next->next;
        return head;
    }
};