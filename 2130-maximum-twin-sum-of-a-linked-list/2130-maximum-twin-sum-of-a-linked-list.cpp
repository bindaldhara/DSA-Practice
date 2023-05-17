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
    ListNode *getMid(ListNode* head){
    ListNode *slow=head,*fast=head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
    
ListNode *reverse(ListNode*head,ListNode* mid){
        ListNode* cur=mid,*prev=NULL,*temp;
        while(temp->next!=mid){
            temp=temp->next;
        }
        while(cur){
            ListNode *next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        temp->next=prev;
        return prev;
}
    int pairSum(ListNode* head) {
        ListNode *mid=getMid(head);
        mid=reverse(head,mid);
        int ans=INT_MIN;
        while(mid){
            ans=max(ans,head->val+mid->val);
            mid=mid->next;
            head=head->next;
        }
        return ans;
        
    }
};